function sendMessage() {
  let input = document.getElementById("user-input");
  let message = input.value.trim();

  if (message === "") return;

  // Display user message
  let chatBox = document.getElementById("chat-box");
  let userMsg = document.createElement("p");
  userMsg.className = "user";
  userMsg.innerText = message;
  chatBox.appendChild(userMsg);

  // Get bot response
  let botMsg = document.createElement("p");
  botMsg.className = "bot";
  botMsg.innerText = getBotResponse(message);
  chatBox.appendChild(botMsg);

  // Scroll to bottom
  chatBox.scrollTop = chatBox.scrollHeight;

  // Clear input
  input.value = "";
}

function getBotResponse(input) {
  input = input.toLowerCase();

  if (input.includes("hello")) return "Hello! How are you?";
  if (input.includes("how are you")) return "I'm great! Thanks for asking.";
  if (input.includes("bye")) return "Goodbye! Have a nice day 😊";
  if(input.include("how are you ")) return "i am fine " ;
  // if (input include(""))
  return "Sorry, I don't understand that. Try saying hello!";
}
