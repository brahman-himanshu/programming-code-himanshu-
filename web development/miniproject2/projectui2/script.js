  
        // Initialize the air quality map
        function initMap() {
            const map = L.map('airQualityMap').setView([28.6139, 77.2090], 10);
            
            L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
                attribution: '&copy; <a href="https://www.openstreetmap.org/copyright">OpenStreetMap</a> contributors'
            }).addTo(map);
            
            // Sample pollution data for different locations in Delhi-NCR
            const pollutionData = [
                {lat: 28.6139, lng: 77.2090, aqi: 342, location: "Central Delhi", pollutant: "PM2.5"},
                {lat: 28.4595, lng: 77.0266, aqi: 298, location: "Gurugram", pollutant: "PM10"},
                {lat: 28.5355, lng: 77.3910, aqi: 315, location: "Noida", pollutant: "PM2.5"},
                {lat: 28.4089, lng: 77.3178, aqi: 287, location: "Faridabad", pollutant: "NO2"},
                {lat: 28.6692, lng: 77.4538, aqi: 332, location: "Ghaziabad", pollutant: "PM2.5"},
                {lat: 28.7041, lng: 77.1025, aqi: 356, location: "North Delhi", pollutant: "PM2.5"},
                {lat: 28.5244, lng: 77.1855, aqi: 321, location: "South Delhi", pollutant: "PM10"}
            ];
            
            // Color coding based on AQI
            function getColor(aqi) {
                return aqi > 400 ? '#800026' :
                       aqi > 300 ? '#BD0026' :
                       aqi > 200 ? '#E31A1C' :
                       aqi > 100 ? '#FC4E2A' :
                       aqi > 50  ? '#FD8D3C' :
                                   '#FEB24C';
            }
            
            // Add markers for each location
            pollutionData.forEach(data => {
                const circle = L.circleMarker([data.lat, data.lng], {
                    color: getColor(data.aqi),
                    fillColor: getColor(data.aqi),
                    fillOpacity: 0.7,
                    radius: 15
                }).addTo(map);
                
                circle.bindPopup(`
                    <b>${data.location}</b><br>
                    AQI: ${data.aqi} (${getAQICategory(data.aqi)})<br>
                    Primary Pollutant: ${data.pollutant}
                `);
            });
            
            // Add legend
            const legend = L.control({position: 'bottomright'});
            legend.onAdd = function(map) {
                const div = L.DomUtil.create('div', 'info legend');
                const grades = [0, 50, 100, 200, 300, 400];
                const labels = [];
                
                div.innerHTML = '<h4>AQI Scale</h4>';
                
                for (let i = 0; i < grades.length; i++) {
                    div.innerHTML +=
                        '<i style="background:' + getColor(grades[i] + 1) + '"></i> ' +
                        grades[i] + (grades[i + 1] ? '&ndash;' + grades[i + 1] + '<br>' : '+');
                }
                
                return div;
            };
            legend.addTo(map);
        }
        
        function getAQICategory(aqi) {
            if (aqi <= 50) return "Good";
            if (aqi <= 100) return "Satisfactory";
            if (aqi <= 200) return "Moderate";
            if (aqi <= 300) return "Poor";
            if (aqi <= 400) return "Very Poor";
            return "Severe";
        }
        
        // Initialize charts
        function initCharts() {
            // Pollution Levels Chart
            const pollutionCtx = document.getElementById('pollutionChart').getContext('2d');
            const pollutionChart = new Chart(pollutionCtx, {
                type: 'line',
                data: {
                    labels: ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'],
                    datasets: [{
                        label: 'PM2.5 (μg/m³)',
                        data: [220, 240, 190, 160, 140, 120, 110, 130, 150, 180, 280, 320],
                        borderColor: '#ea4335',
                        backgroundColor: 'rgba(234, 67, 53, 0.1)',
                        tension: 0.4,
                        fill: true
                    }, {
                        label: 'PM10 (μg/m³)',
                        data: [380, 400, 350, 300, 280, 250, 230, 260, 290, 320, 420, 480],
                        borderColor: '#f9ab00',
                        backgroundColor: 'rgba(249, 171, 0, 0.1)',
                        tension: 0.4,
                        fill: true
                    }, {
                        label: 'NO₂ (μg/m³)',
                        data: [70, 75, 65, 55, 50, 45, 40, 45, 50, 60, 80, 90],
                        borderColor: '#1a73e8',
                        backgroundColor: 'rgba(26, 115, 232, 0.1)',
                        tension: 0.4,
                        fill: true
                    }]
                },
                options: {
                    responsive: true,
                    maintainAspectRatio: false,
                    plugins: {
                        legend: {
                            position: 'top',
                        },
                        tooltip: {
                            mode: 'index',
                            intersect: false
                        }
                    },
                    scales: {
                        y: {
                            beginAtZero: true,
                            title: {
                                display: true,
                                text: 'Concentration (μg/m³)'
                            }
                        }
                    }
                }
            });
            
            // Pollution Sources Chart
            const sourcesCtx = document.getElementById('sourcesChart').getContext('2d');
            const sourcesChart = new Chart(sourcesCtx, {
                type: 'doughnut',
                data: {
                    labels: ['Vehicles', 'Industry', 'Construction', 'Biomass Burning', 'Power Plants', 'Other'],
                    datasets: [{
                        data: [32, 28, 15, 12, 8, 5],
                        backgroundColor: [
                            '#FF6384',
                            '#36A2EB',
                            '#FFCE56',
                            '#4BC0C0',
                            '#9966FF',
                            '#FF9F40'
                        ],
                        borderWidth: 1
                    }]
                },
                options: {
                    responsive: true,
                    maintainAspectRatio: false,
                    plugins: {
                        legend: {
                            position: 'bottom',
                        }
                    }
                }
            });
        }
        
        // Route planning functionality
        document.getElementById('planRouteBtn').addEventListener('click', function() {
            const start = document.getElementById('startLocation').value;
            const end = document.getElementById('endLocation').value;
            
            if (start && end) {
                document.getElementById('routeResult').style.display = 'block';
    } else {
                alert('Please enter both start and end locations');
            }
        });
        
        // Location selector functionality
        document.querySelectorAll('.location-btn').forEach(button => {
            button.addEventListener('click', function() {
                document.querySelectorAll('.location-btn').forEach(btn => {
                    btn.classList.remove('active');
                });
                this.classList.add('active');
                
                // In a real application, this would filter the map data
                console.log(`Showing data for: ${this.dataset.location}`);
            });
        });
        
        // Initialize everything when the page loads
        document.addEventListener('DOMContentLoaded', function() {
            initMap();
            initCharts();
        });

         async function loadLocationAndAQI() {
      try {
        // Step 1: Get location from IP (no popup)
        let locRes = await fetch("https://ipapi.co/json/");
        let locData = await locRes.json();
        let city = locData.city + ", " + locData.region;
        let lat = locData.latitude;
        let lon = locData.longitude;

        document.getElementById("location").innerText = city;

        // Step 2: Fetch AQI from WAQI API (using demo key)
        let aqiRes = await fetch(`https://api.waqi.info/feed/geo:${lat};${lon}/?token=demo`);
        let aqiData = await aqiRes.json();

        if (aqiData.status === "ok") {
          let aqi = aqiData.data.aqi;
          const aqiElem = document.getElementById("aqi");

          // Reset style
          aqiElem.className = "aqi-value";

          // Step 3: Assign AQI category + color
          if (aqi <= 50) {
            aqiElem.innerText = aqi + " (Good)";
            aqiElem.classList.add("good");
            document.getElementById("air-quality").innerText = "Air Quality: Good ✅";
          } else if (aqi <= 100) {
            aqiElem.innerText = aqi + " (Moderate)";
            aqiElem.classList.add("moderate");
            document.getElementById("air-quality").innerText = "Air Quality: Moderate ⚠️";
          } else if (aqi <= 150) {
            aqiElem.innerText = aqi + " (Unhealthy for Sensitive Groups)";
            aqiElem.classList.add("unhealthy");
            document.getElementById("air-quality").innerText = "Air Quality: Unhealthy for Sensitive 😷";
          } else if (aqi <= 200) {
            aqiElem.innerText = aqi + " (Unhealthy)";
            aqiElem.classList.add("very-unhealthy");
            document.getElementById("air-quality").innerText = "Air Quality: Unhealthy 🚨";
          } else {
            aqiElem.innerText = aqi + " (Hazardous)";
            aqiElem.classList.add("hazardous");
            document.getElementById("air-quality").innerText = "Air Quality: Hazardous ☠️";
          }
        } else {
          document.getElementById("aqi").innerText = "--";
          document.getElementById("air-quality").innerText = "AQI data not available.";
        }

      } catch (err) {
        document.getElementById("location").innerText = "Error detecting location";
        document.getElementById("aqi").innerText = "--";
        document.getElementById("air-quality").innerText = "Error fetching AQI.";
      }
    }

    loadLocationAndAQI();