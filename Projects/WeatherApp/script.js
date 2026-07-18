const cityInput=document.getElementById("cityInput");
const searchBtn=document.getElementById("searchBtn");
const weatherResult=document.getElementById("weatherResult");
const API_KEY="YOUR_API_KEY";

async function getWeather() {
  const city=cityInput.value.trim();
  if (city==="") {
    alert("Please enter a city name. ");
    return;
  }
  const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`;
  weatherResult.innerHTML="<p>⏳ Loading weather....</p>";
  try {
    const response=await fetch(url);
    const data=await response.json();
    const description=data.weather[0].description;
    const formattedDescription=description.charAt(0).toUpperCase() + description.slice(1);
    const icon=data.weather[0].icon;
    const iconUrl = `https://openweathermap.org/img/wn/${icon}@2x.png`;
    if (!response.ok) {
      weatherResult.innerHTML=`<p>${data.message}</p>`;
      return;
    }
    weatherResult.innerHTML=`
    <h2>📍${data.name}</h2>
    <img src="${iconUrl}" alt="Weather icon">
    <p><strong>🌡️ Temperature: </strong> ${data.main.temp} °C</p>
    <p><strong>🤗 Feels like: </strong> ${data.main.feels_like} °C</p>
    <p><strong>💧 Humidity: </strong> ${data.main.humidity}%</p>
    <p><strong>💨 Wind: </strong> ${data.wind.speed} m/s</p>
    <p><strong>☁️ Weather: </strong> ${formattedDescription}</p>
    `;
    cityInput.value="";
  } catch(error) {
    console.log(error);
    weatherResult.innerHTML=`
    <p>Something went wrong. Please try again.</p>`;
  }
}
searchBtn.addEventListener("click", getWeather);
cityInput.addEventListener("keydown", function(event) {
  if (event.key==="Enter") {
    getWeather();
  }
});