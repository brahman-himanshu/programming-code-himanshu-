fetch("https://ipapi.co/json/")
    .then(res => res.json())
    .then(data => {
        document.getElementById("ip").textContent = data.ip;
        document.body.innerHTML += `
            <p>City: ${data.city}</p>
            <p>Region: ${data.region}</p>
            <p>Country: ${data.country_name}</p>
            <p>ISP: ${data.org}</p>
        `;
    });
  
 
    const ipElement = document.getElementById("ip");
    const loader = document.getElementById("loader");

    // Show loader when fetching starts
    loader.style.display = "block";

    fetch("https://api64.ipify.org?format=json")
        .then(response => response.json())
        .then(data => {
            ipElement.textContent = data.ip;
        })
        .catch(() => {
            ipElement.textContent = "Unable to get IP";
        })
        .finally(() => {
            // Hide loader once done
            loader.style.display = "none";
        });

