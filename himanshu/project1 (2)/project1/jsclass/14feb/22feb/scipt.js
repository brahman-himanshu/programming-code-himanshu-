let display = document.getElementById("display");

function appendNumber(number) {
  display.value += number;
}

function appendOperator(operator) {
  display.value += ' ' + operator + ' ';
}

function appendDot(dot) {
  if (!display.value.includes('.')) {
    display.value += dot;
  }
}

function clearDisplay() {
  display.value = '';
}

function calculate() {
  try {    
    display.value = eval(display.value);
  } catch (error) {
    display.value = "Error";
  }
}
