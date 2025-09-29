
        // Initialize the map
        function initMap() {
            const map = L.map('airQualityMap').setView([28.6139, 77.2090], 10);
            
            L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
                attribution: '&copy; OpenStreetMap contributors'
            }).addTo(map);
            
            // Add markers for different locations in Delhi-NCR
            const locations = [
                { name: "Delhi Center", coords: [28.6139, 77.2090], aqi: 342, pollutant: "PM2.5" },
                { name: "Gurugram", coords: [28.4595, 77.0266], aqi: 365, pollutant: "PM2.5" },
                { name: "Noida", coords: [28.5355, 77.3910], aqi: 328, pollutant: "PM10" },
                { name: "Faridabad", coords: [28.4089, 77.3178], aqi: 378, pollutant: "PM2.5" },
                { name: "Ghaziabad", coords: [28.6692, 77.4538], aqi: 395, pollutant: "PM2.5" }
            ];
            
            locations.forEach(location => {
                const marker = L.marker(location.coords).addTo(map);
                marker.bindPopup(`
                    <b>${location.name}</b><br>
                    AQI: ${location.aqi}<br>
                    Primary Pollutant: ${location.pollutant}
                `);
            });
        }
        
        // Initialize charts
        function initCharts() {
            // Pollution Trends Chart
            const ctx = document.getElementById('pollutionChart').getContext('2d');
            const pollutionChart = new Chart(ctx, {
                type: 'line',
                data: {
                    labels: ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun', 'Mon', 'Tue', 'Wed'],
                    datasets: [
                        {
                            label: 'PM2.5 (µg/m³)',
                            data: [215, 230, 245, 260, 240, 225, 210, 220, 235, 250],
                            borderColor: '#ea4335',
                            backgroundColor: 'rgba(234, 67, 53, 0.1)',
                            tension: 0.3,
                            fill: true
                        },
                        {
                            label: 'PM10 (µg/m³)',
                            data: [380, 395, 410, 430, 400, 385, 370, 380, 395, 410],
                            borderColor: '#f9ab00',
                            backgroundColor: 'rgba(249, 171, 0, 0.1)',
                            tension: 0.3,
                            fill: true
                        },
                        {
                            label: 'NOx (µg/m³)',
                            data: [85, 88, 92, 95, 90, 87, 83, 85, 89, 93],
                            borderColor: '#34a853',
                            backgroundColor: 'rgba(52, 168, 83, 0.1)',
                            tension: 0.3,
                            fill: true
                        },
                        {
                            label: 'SO2 (µg/m³)',
                            data: [25, 26, 28, 30, 27, 25, 24, 25, 27, 29],
                            borderColor: '#1a73e8',
                            backgroundColor: 'rgba(26, 115, 232, 0.1)',
                            tension: 0.3,
                            fill: true
                        }
                    ]
                },
                options: {
                    responsive: true,
                    maintainAspectRatio: false,
                    plugins: {
                        title: {
                            display: true,
                            text: 'Pollution Trends in Delhi-NCR'
                        }
                    },
                    scales: {
                        y: {
                            beginAtZero: false,
                            title: {
                                display: true,
                                text: 'Concentration (µg/m³)'
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
                    labels: ['Vehicles', 'Industry', 'Construction', 'Biomass Burning', 'Other'],
                    datasets: [{
                        data: [32, 28, 15, 12, 13],
                        backgroundColor: [
                            '#ea4335',
                            '#f9ab00',
                            '#34a853',
                            '#1a73e8',
                            '#6f42c1'
                        ]
                    }]
                },
                options: {
                    responsive: true,
                    maintainAspectRatio: false,
                    plugins: {
                        legend: {
                            position: 'bottom'
                        },
                        title: {
                            display: true,
                            text: 'Pollution Sources in Delhi-NCR'
                        }
                    }
                }
            });
        }
        
        // Simulate location detection and AQI data
        function simulateLocationDetection() {
            const locations = [
                { 
                    name: "Connaught Place, New Delhi", 
                    aqi: 342, 
                    quality: "Very Poor",
                    address: "Connaught Place, New Delhi, Delhi 110001, India"
                },
                { 
                    name: "Gurugram Sector 29", 
                    aqi: 365, 
                    quality: "Severe",
                    address: "Sector 29, Gurugram, Haryana 122001, India"
                },
                { 
                    name: "Noida Sector 62", 
                    aqi: 328, 
                    quality: "Very Poor",
                    address: "Sector 62, Noida, Uttar Pradesh 201309, India"
                },
                { 
                    name: "Rajouri Garden, Delhi", 
                    aqi: 355, 
                    quality: "Very Poor",
                    address: "Rajouri Garden, New Delhi, Delhi 110027, India"
                }
            ];
            
            // Randomly select a location for demonstration
            const randomLocation = locations[Math.floor(Math.random() * locations.length)];
            
            document.getElementById('location').textContent = randomLocation.name;
            document.getElementById('aqi').textContent = randomLocation.aqi;
            document.getElementById('aqi').className = `aqi-value ${randomLocation.quality.toLowerCase().replace(' ', '-')}`;
            document.getElementById('air-quality').textContent = `Air Quality: ${randomLocation.quality}`;
            document.getElementById('address').textContent = `Address: ${randomLocation.address}`;
            document.getElementById('current-aqi').textContent = randomLocation.aqi;
            document.getElementById('aqi-category').textContent = randomLocation.quality;
        }
        
        // Initialize slider functionality
        function initSliders() {
            const sliders = document.querySelectorAll('.pollutant-slider input[type="range"]');
            
            sliders.forEach(slider => {
                const valueElement = document.getElementById(slider.id.replace('-slider', '-value'));
                
                slider.addEventListener('input', function() {
                    valueElement.textContent = `${this.value} µg/m³`;
                });
            });
        }
        
        // Route planner functionality
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
                document.querySelectorAll('.location-btn').forEach(btn => btn.classList.remove('active'));
                this.classList.add('active');
                
                // In a real app, this would filter the map data
                console.log(`Selected location: ${this.dataset.location}`);
            });
        });
        
        // Initialize everything when the page loads
        document.addEventListener('DOMContentLoaded', function() {
            initMap();
            initCharts();
            simulateLocationDetection();
            initSliders();
        });