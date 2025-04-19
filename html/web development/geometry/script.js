console.log("srg computer institute ");
let radii = document.querySelector('.in-1');
 let circles = document.querySelector("#Circleresult");
 let btnn = document.querySelector('.btn-1');
let pi = 3.14; 

function circle(){
    let radiivalue = radii.value;
    let area =  pi * radiivalue * radiivalue ;  
    console.log(area)
    circles.innerHTML = area;
}
  btnn.addEventListener("click",circle);




let length2= document.querySelector('.in-2');
let squares = document.querySelector("#squareresult  ");
let btn2 = document.querySelector('.btn-2');



function square(length){

    let l = Number(length2.value);
    let area = l * l ; 
    console.log(area)
    squares.innerHTML= area ; 
}
btn2.addEventListener("click",square);


function rectangle (length,  width ){
   let area = length * width ; 
   console.log (area )
}
rectangle(5,6 )


function triangle ( base ,  height ){
    let area = 1/2 * base * height ;
    console.log(area )
}
triangle(3,4 )