 
//   // Button Event Listener
//   document.getElementById("btn").addEventListener("click", generatePassword);
//   // Password Generator Function
//   function generatePassword() {
//     const chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+";
//     const length = 8;  // password length
//     let pass = "";
//     for (let i = 0; i < length; i++) {
//       const idx = Math.floor(Math.random() * chars.length);
//       pass += chars.charAt(idx);
//     }
//     document.getElementById("demo").innerText = pass;
//   }
 


let display = document.getElementById('display');
function appendValue(val) {
    if (display.innerHTML === "0") {
        display.innerHTML = val;
    } else {
        display.innerHTML += val;
    }
}
function clearDisplay() {
    display.innerText = "0";
}
function backspace() {
    if (display.innerText.length === 1) {
        display.innerText = "0";
    }
    else {
        display.innerText = display.innerText.slice(0, -1);
    }
}
function calculate() {
    try {
        display.innerText = eval(display.innerText);
    } catch {
        display.innerText = "Error";
    }
}