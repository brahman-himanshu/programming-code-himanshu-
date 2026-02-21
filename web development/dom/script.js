alert("hello srgian "); 


let h = document.querySelector("#h");
h.onclick = () => {
    console.log ("btn was clicked ")
    let a = "srg computer institute " 
    console.log(a);
}

h.ondblclick= () => {
    console.log ("btn  was clicked doubled time ")
}

h.mousehover= () => {
    console.log ("hover on the button  ")
}

h.onclick = (e) => {
    console.log(e)
    console.log(e.target )
    console.log (e.type )
}

let mode  =  document.querySelector("#mode");
let body = document.querySelector("body");
let currentmode= "light" ;
mode.addEventListener ("click ", () => {
    if (currentmode== "light" ){
        currentmode = "dark";
        body.classList.add("dark");
    }
    else {
        currentmode = "light " ;
        body.classList.add("light ");
    }
    console.log (currentmode)
}
);