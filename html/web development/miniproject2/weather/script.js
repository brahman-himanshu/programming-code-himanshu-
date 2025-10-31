const submitBtn = document.querySelector("#btn");
function weather(){
event.preventDefault();
    let keyCode = "707f60f7992d4bb9a9b93900253008";
let input = document.querySelector("#input").value;
document.querySelector("#input").value="";
const infoDiv= document.querySelector(".info-div");
const info = document.querySelectorAll(".info");
const url = `https://api.weatherapi.com/v1/current.json?key=${keyCode}&q=${input}`;

    info.forEach((div) => {
  div.innerHTML = "";
});
if(!input.trim()){
        alert("Please enter something..")
    }
fetch(url)
.then((res)=>{
    return res.json();
}).then((data)=>{
    if (!data || !data.location) {
        throw new Error("Invalid location");
    }
    
infoDiv.style.display='flex';
infoDiv.style.flexDirection='column';
infoDiv.style.gap='10px';
const name = document.createElement('h2');
name.innerText = data.location.name+"("+data.location.country+")";
name.classList.add('place');
 const condition = document.createElement('p');
const condition2 = document.createElement('p');
condition.innerText="☁  Cond:";
condition2.innerText=data.current.condition.text;
const temp = document.createElement('p');
const temp2 = document.createElement('p');
temp.innerText = "🌡 Temperature:";
temp2.innerText = data.current.temp_c+"ºc";
const wind = document.createElement('p');
const wind2 = document.createElement('p');
wind.innerText = "🌬 Wind:";
wind2.innerText = data.current.wind_kph+"km/h";
const windDir = document.createElement('p');
const windDir2 = document.createElement('p');
windDir.innerText="🧭 Wind direction:"
windDir2.innerText=data.current.wind_dir;
const humidity = document.createElement('p');
const humidity2 = document.createElement('p');
humidity.innerText="💧 Humidity:";
humidity2.innerText = data.current.humidity+"%";
const feelsLike = document.createElement('p');
const feelsLike2 = document.createElement('p');
feelsLike.innerText= "🥵 Feelslike:";
feelsLike2.innerText=data.current.feelslike_c+"ºc";
const pressure = document.createElement('p');
const pressure2 = document.createElement('p');
pressure.innerText="⚖ Pressure:";
pressure2.innerText=data.current.pressure_mb+"hPa";
const cloud = document.createElement('p');
const cloud2 = document.createElement('p');
cloud.innerText = "🌤 Cloudness:";
cloud2.innerText= data.current.cloud+"%";
const vis = document.createElement('p');
const vis2 = document.createElement('p');
vis.innerText="🔭 Visibility:";
vis2.innerText=data.current.vis_km+"Km";
const rain = document.createElement('p');
const rain2 = document.createElement('p');
rain.innerText= "🌨 Rain:";
rain2.innerText=data.current.precip_mm+"mm";
info[0].appendChild(name);
info[1].appendChild(condition);
info[1].appendChild(condition2);
info[2].appendChild(windDir);
info[2].appendChild(windDir2);
info[3].appendChild(temp);
info[3].appendChild(temp2);
info[4].appendChild(wind);
info[4].appendChild(wind2);
info[5].appendChild(humidity);
info[5].appendChild(humidity2);
info[6].appendChild(feelsLike);
info[6].appendChild(feelsLike2);
info[7].appendChild(pressure);
info[7].appendChild(pressure2);
info[8].appendChild(vis);
info[8].appendChild(vis2);
info[9].appendChild(rain);
info[9].appendChild(rain2);
info[10].appendChild(cloud);
info[10].appendChild(cloud2);
}).catch((error)=>{
    alert("Data not found");
})
    
}
submitBtn.addEventListener("click",weather);

