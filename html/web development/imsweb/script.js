
  const hamburger = document.getElementById('hamburger');
  const navbar = document.getElementById('navbar').querySelector('ul');

  hamburger.addEventListener('click', () => {
    navbar.classList.toggle('show');
  });

