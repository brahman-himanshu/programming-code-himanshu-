const counterValue = document.getElementById('counterValue');
const increment = document.getElementById('incrementButton');
let count = 100000 ;

console.log(count);
function substract(){
    count--;
    console.log(count);
    counterValue.textContent = count  ;
}


// increment.addEventListener('click',substract );
substract();
console.log(count);