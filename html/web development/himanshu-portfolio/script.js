
  const form = document.getElementById("contactForm");
  const successMsg = document.getElementById("successMsg");

  form.addEventListener("submit", async function (e) {
    e.preventDefault();

    const formData = new FormData(form);
    const response = await fetch(form.action, {
      method: form.method,
      body: formData,
      headers: { 'Accept': 'application/json' }
    });

    if (response.ok) {
      successMsg.style.display = "block";
      form.reset();
    }
  });
