


import React, { useState } from "react";
import { ethers } from "ethers";
import SupplyChainABI from "./SupplyChain.json"; // ABI from Remix/Hardhat

const contractAddress = "YOUR_DEPLOYED_CONTRACT_ADDRESS";

function App() {
  const [productName, setProductName] = useState("");
  const [productId, setProductId] = useState("");
  const [productDetails, setProductDetails] = useState(null);

  // Connect wallet
  async function connectWallet() {
    if (window.ethereum) {
      await window.ethereum.request({ method: "eth_requestAccounts" });
    } else {
      alert("Install MetaMask!");
    }
  }

  // Register Product
  async function registerProduct() {
    const provider = new ethers.BrowserProvider(window.ethereum);
    const signer = await provider.getSigner();
    const contract = new ethers.Contract(contractAddress, SupplyChainABI, signer);

    const tx = await contract.registerProduct(productName);
    await tx.wait();
    alert("Product registered!");
  }

  // Get Product Details
  async function getProduct() {
    const provider = new ethers.BrowserProvider(window.ethereum);
    const contract = new ethers.Contract(contractAddress, SupplyChainABI, provider);

    const product = await contract.getProduct(productId);
    setProductDetails(product);
  }

  return (
    <div style={{ padding: "20px" }}>
      <h1>Blockchain Supply Chain</h1>
      <button onClick={connectWallet}>Connect Wallet</button>

      <h2>Register Product</h2>
      <input type="text" placeholder="Product Name" onChange={(e) => setProductName(e.target.value)} />
      <button onClick={registerProduct}>Register</button>

      <h2>Check Product</h2>
      <input type="number" placeholder="Product ID" onChange={(e) => setProductId(e.target.value)} />
      <button onClick={getProduct}>Get Details</button>

      {productDetails && (
        <div>
          <p><strong>Name:</strong> {productDetails[0]}</p>
          <p><strong>Owner:</strong> {productDetails[1]}</p>
          <p><strong>History:</strong></p>
          <ul>
            {productDetails[2].map((stage, index) => (
              <li key={index}>{stage}</li>
            ))}
          </ul>
        </div>
      )}
    </div>
  );
}


export default App;
