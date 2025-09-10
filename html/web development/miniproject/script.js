// Contract ABI (from Remix after compiling)
const contractABI = [
  // Paste ABI JSON here
];

// Contract Address (from Remix after deployment)
const contractAddress = "YOUR_DEPLOYED_CONTRACT_ADDRESS";

let contract;
let signer;

// Connect wallet
async function connectWallet() {
  if (window.ethereum) {
    const provider = new ethers.BrowserProvider(window.ethereum);
    await provider.send("eth_requestAccounts", []);
    signer = await provider.getSigner();
    contract = new ethers.Contract(contractAddress, contractABI, signer);
    alert("Wallet connected!");
  } else {
    alert("Install MetaMask!");
  }
}

// Register product
async function registerProduct() {
  const name = document.getElementById("productName").value;
  if (!name) return alert("Enter product name");

  const tx = await contract.registerProduct(name);
  await tx.wait();
  alert("Product registered!");
}

// Get product details
async function getProduct() {
  const id = document.getElementById("productId").value;
  if (!id) return alert("Enter product ID");

  const product = await contract.getProduct(id);
  document.getElementById("productDetails").innerHTML = `
    <p><strong>Name:</strong> ${product[0]}</p>
    <p><strong>Owner:</strong> ${product[1]}</p>
    <p><strong>History:</strong> ${product[2].join(", ")}</p>
  `;
}
