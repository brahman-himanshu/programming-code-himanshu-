// ================= CART FUNCTION =================
let cartCount = 0;
const cartDisplay = document.getElementById("cart-count");
const addCartButtons = document.querySelectorAll(".add-cart");

addCartButtons.forEach((btn) => {
  btn.addEventListener("click", () => {
    cartCount++;
    cartDisplay.textContent = cartCount;
  });
});

// ================= SEARCH FUNCTION =================
const searchInput = document.getElementById("searchInput");
const products = document.querySelectorAll(".product");

searchInput.addEventListener("keyup", () => {
  const searchText = searchInput.value.toLowerCase();

  products.forEach((product) => {
    const title = product.querySelector("h2").innerText.toLowerCase();
    product.style.display = title.includes(searchText) ? "block" : "none";
  });
});

// ================= BACK TO TOP =================
const backToTop = document.querySelector(".first");

backToTop.addEventListener("click", () => {
  window.scrollTo({
    top: 0,
    behavior: "smooth",
  });
});



// ===== HAMBURGER MENU =====
const hamburger = document.getElementById("hamburger");
const navLinks = document.getElementById("nav-links");

hamburger.addEventListener("click", () => {
  navLinks.classList.toggle("active");
});
