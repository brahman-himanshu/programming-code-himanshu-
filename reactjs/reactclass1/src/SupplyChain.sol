// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract SupplyChain {
    struct Product {
        uint id;
        string name;
        address currentOwner;
        string[] history;
    }

    mapping(uint => Product) public products;
    uint public productCount = 0;

    event ProductRegistered(uint productId, string name, address owner);
    event OwnershipTransferred(uint productId, address from, address to);

    // Register a new product
    function registerProduct(string memory _name) public {
        productCount++;
        Product storage newProduct = products[productCount];
        newProduct.id = productCount;
        newProduct.name = _name;
        newProduct.currentOwner = msg.sender;
        newProduct.history.push("Product Created");

        emit ProductRegistered(productCount, _name, msg.sender);
    }

    // Transfer ownership
    function transferOwnership(uint _productId, address _newOwner, string memory _stage) public {
        Product storage product = products[_productId];
        require(msg.sender == product.currentOwner, "Only owner can transfer");

        address oldOwner = product.currentOwner;
        product.currentOwner = _newOwner;
        product.history.push(_stage);

        emit OwnershipTransferred(_productId, oldOwner, _newOwner);
    }

    // Get product details
    function getProduct(uint _productId) public view returns (string memory, address, string[] memory) {
        Product storage product = products[_productId];
        return (product.name, product.currentOwner, product.history);
    }
}
