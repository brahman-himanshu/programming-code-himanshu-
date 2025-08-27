let x = document.querySelector(".input");
let list = document.querySelector(".l1");
let btn = document.querySelector(".button");
let list2 = document.querySelector(".l2");
let clear = document.querySelector(".Clear");

function sachin() {
  if (x === "") {
    alert("please fill it");
  } else {
    list.innerText = x.value;
    console.log(list.innerText);
  }
}
if (x === "") {
  alert("please fill it");
}
function dblclick() {
  list2.innerText = x.value;
  console.log(list.innerText);
}
btn.addEventListener("click", sachin);
btn.addEventListener("dblclick", dblclick);