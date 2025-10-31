

// Initialize the map
const map = L.map('map').setView([0, 0], 15);

// Add OpenStreetMap tiles
L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
  attribution: '© OpenStreetMap contributors'
}).addTo(map);

// Add marker
let marker = L.marker([0, 0]).addTo(map);

// Function to update position
function updatePosition(position) {
  const lat = position.coords.latitude;
  const lon = position.coords.longitude;
  const acc = position.coords.accuracy;

  document.getElementById("lat").textContent = lat.toFixed(5);
  document.getElementById("lon").textContent = lon.toFixed(5);
  document.getElementById("acc").textContent = acc.toFixed(2);

  // Update map and marker
  marker.setLatLng([lat, lon]);
  map.setView([lat, lon]);

  // Reverse geocode (get address)
  fetch(`https://nominatim.openstreetmap.org/reverse?lat=${lat}&lon=${lon}&format=json`)
    .then(res => res.json())
    .then(data => {
      const address = data.display_name || "Unable to get address";
      document.getElementById("address").textContent = address;
    })
    .catch(err => {
      document.getElementById("address").textContent = "Error fetching address";
    });
}

// Error handler
function showError(error) {
  alert("Error getting location: " + error.message);
}

// Start live tracking
if (navigator.geolocation) {
  navigator.geolocation.watchPosition(updatePosition, showError, {
    enableHighAccuracy: true,
    maximumAge: 0,
    timeout: 10000
  });
} else {
  alert("Geolocation not supported in this browser.");
}
