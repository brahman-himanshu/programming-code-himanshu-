// let sum = 0 ;
// for(let i = 0 ;i <10 ; i++){
//   sum = sum + i ;
//   console.log(sum )
// }


// function factorial (i){
// let sum = 0 ;
// if (i==0){
//     return 0 ;
// }
// sum  = sum + i;
// i--;
// console.log(sum)
// factorial(i);
// }
// // factorial(5);

// let input = document.querySelector("#factorial");
// let btnn = document.querySelector('.btn');

// let resultcal = document.querySelector('#result');


// function factorial() {
//   invalue = Number(input.value);
//     if ( invalue === 0 || invalue === 1) {
//       return 1;
//     }
//     let cal =  invalue * factorial( invalue - 1);
// resultcal.innerText = cal;

//   }


  
// btnn.addEventListener("click",factorial);



// next
fetch('https://movies-app-24x7.netlify.app/')
    .then(response => {
        return response.json();
    })
    .then(data =>{ console.log(data)})    ;