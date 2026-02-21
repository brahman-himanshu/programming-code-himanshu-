// DOM Elements
const cityInput = document.getElementById('city-input');
const searchBtn = document.getElementById('search-btn');
const weatherData = document.getElementById('weather-data');
const loading = document.getElementById('loading');

// Your OpenWeatherMap API Key
const API_KEY = '57c5f5ae0dfe26e8d4831274eda13b4b';

// Event Listeners
searchBtn.addEventListener('click', getWeatherData);
cityInput.addEventListener('keypress', (e) => {
  if (e.key === 'Enter') getWeatherData();
});

// Load user location on page load
window.addEventListener('load', () => {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(
      (position) => {
        const { latitude, longitude } = position.coords;
        getWeatherByCoords(latitude, longitude);
      },
      () => getWeatherDataByCity('London')
    );
  } else {
    getWeatherDataByCity('London');
  }
});

// Main Functions
async function getWeatherData() {
  const city = cityInput.value.trim();
  if (!city) {
    alert('Please enter a city name');
    return;
  }

  loading.style.display = 'block';
  weatherData.innerHTML = '';

  await getWeatherDataByCity(city);
}

async function getWeatherDataByCity(city) {
  try {
    const response = await fetch(
      `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`
    );
    if (!response.ok) throw new Error('City not found');

    const data = await response.json();
    displayCurrentWeather(data);
    await getForecast(city);
  } catch (error) {
    displayError(error.message);
  } finally {
    loading.style.display = 'none';
  }
}

async function getWeatherByCoords(lat, lon) {
  try {
    const response = await fetch(
      `https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&appid=${API_KEY}&units=metric`
    );
    if (!response.ok) throw new Error('Weather data not available');

    const data = await response.json();
    displayCurrentWeather(data);

    const forecastResponse = await fetch(
      `https://api.openweathermap.org/data/2.5/forecast?lat=${lat}&lon=${lon}&appid=${API_KEY}&units=metric`
    );
    if (forecastResponse.ok) {
      const forecastData = await forecastResponse.json();
      displayForecast(forecastData);
    }
  } catch (error) {
    displayError(error.message);
  } finally {
    loading.style.display = 'none';
  }
}

async function getForecast(city) {
  const forecastResponse = await fetch(
    `https://api.openweathermap.org/data/2.5/forecast?q=${city}&appid=${API_KEY}&units=metric`
  );
  if (forecastResponse.ok) {
    const forecastData = await forecastResponse.json();
    displayForecast(forecastData);
  }
}

function displayCurrentWeather(data) {
  const { name, main, weather, wind, sys } = data;
  const iconCode = weather[0].icon;

  const currentDate = new Date().toLocaleDateString('en-US', {
    weekday: 'long',
    month: 'long',
    day: 'numeric'
  });

  const html = `
    <div class="current-weather">
      <h2>${name}, ${sys.country}</h2>
      <p>${currentDate}</p>
      <div class="weather-icon">
        <img src="https://openweathermap.org/img/wn/${iconCode}@2x.png" alt="">
      </div>
      <h3>${Math.round(main.temp)}°C - ${weather[0].description}</h3>
      <p>Feels like: ${Math.round(main.feels_like)}°C</p>
      <p>Humidity: ${main.humidity}% | Wind: ${wind.speed} m/s</p>
    </div>
  `;

  weatherData.innerHTML = html;
}

function displayForecast(data) {
  const forecastContainer = document.createElement('div');
  forecastContainer.className = 'forecast';
  forecastContainer.innerHTML = '<h2 style="grid-column: 1 / -1;">5-Day Forecast</h2>';

  const dailyForecasts = [];
  for (let i = 0; i < data.list.length; i += 8) {
    dailyForecasts.push(data.list[i]);
  }

  dailyForecasts.forEach(forecast => {
    const date = new Date(forecast.dt * 1000);
    const day = date.toLocaleDateString('en-US', { weekday: 'short' });
    const iconCode = forecast.weather[0].icon;

    forecastContainer.innerHTML += `
      <div class="forecast-item">
        <div>${day}</div>
        <img src="https://openweathermap.org/img/wn/${iconCode}.png" alt="">
        <div>${Math.round(forecast.main.temp)}°C</div>
        <small>${forecast.weather[0].description}</small>
      </div>
    `;
  });

  weatherData.appendChild(forecastContainer);
}

function displayError(message) {
  weatherData.innerHTML = `
    <div class="error">
      <i class="fas fa-exclamation-triangle"></i>
      <p>${message}</p>
      <p>Please try another city.</p>
    </div>
  `;
}