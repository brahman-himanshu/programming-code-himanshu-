// Basic DOM refs
const chat = document.getElementById('chat');
const userInput = document.getElementById('userInput');
const sendBtn = document.getElementById('sendBtn');
const micBtn = document.getElementById('micBtn');
const quickBtns = document.querySelectorAll('.quick');
const sectionInput = document.getElementById('sectionInput');
const simplifyBtn = document.getElementById('simplifyBtn');
const simplifyResult = document.getElementById('simplifyResult');

// Helper to append messages
function appendMessage(text, cls){
  const d = document.createElement('div');
  d.className = 'msg ' + cls;
  d.innerText = text;
  chat.appendChild(d);
  chat.scrollTop = chat.scrollHeight;
}

// Mock AI responder (for demo). Replace this with real API call 
// Function to interact with the Gemini API (Concept)
async function getAIResponse(question) {
    // ⚠️ WARNING: In a production app, never expose your API key directly in the frontend!
    // This should be done via a secure serverless function or backend.
    const API_ENDPOINT = 'YOUR_SECURE_BACKEND_ENDPOINT/generateLegalAnswer'; 
    
    // Define a system instruction (or 'persona') to guide the model's behavior
    const systemInstruction = "You are Law Lens, an expert legal AI for Indian law. Your purpose is to simplify complex legal concepts. Provide accurate, simple, and educational answers, but always include a disclaimer that you are not a substitute for a lawyer and that the user should consult an actual legal professional.";

    try {
        const response = await fetch(API_ENDPOINT, {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json',
                // Your secure API key/token might be handled here or on the backend
            },
            body: JSON.stringify({ 
                // Pass the user's question and the system instruction to your backend
                prompt: question,
                system_instruction: systemInstruction 
            }),
        });

        if (!response.ok) {
            throw new Error(`API response error: ${response.status}`);
        }

        const data = await response.json();
        
        // Assuming your backend returns the final generated text
        return data.generatedText || "Sorry, I couldn't process that legal query. Please try again or rephrase.";

    } catch (error) {
        console.error("AI API Error:", error);
        return "An internal error occurred while fetching the legal information. Please check the network connection or try later.";
    }
}

// Send message flow
// Modified Send message flow
async function sendQuery(q){
    if(!q) return;
    appendMessage(q, 'user');
    userInput.value = '';
    appendMessage("Thinking...", 'bot'); // Removed (demo)

    // *** MODIFICATION HERE ***
    // Call the real AI response function
    const resp = await getAIResponse(q); 

    // remove last bot thinking message
    const msgs = chat.querySelectorAll('.msg.bot');
    const lastBot = msgs[msgs.length-1];
    if(lastBot) lastBot.remove();

    appendMessage(resp, 'bot');
    speakText(resp);
}

// voice input using Web Speech API
let recognition;
if('webkitSpeechRecognition' in window || 'SpeechRecognition' in window){
  const SpeechRecognition = window.SpeechRecognition || window.webkitSpeechRecognition;
  recognition = new SpeechRecognition();
  recognition.lang = 'en-IN';
  recognition.interimResults = false;
  recognition.maxAlternatives = 1;

  recognition.onresult = (e) => {
    const text = e.results[0][0].transcript;
    sendQuery(text);
  };
  recognition.onerror = (e) => {
    console.error(e);
    appendMessage("Voice input error: " + e.error, 'bot');
  };
} else {
  micBtn.style.opacity = 0.4;
  micBtn.title = "Voice not supported in this browser";
}

micBtn.addEventListener('click', ()=>{
  if(!recognition) return;
  recognition.start();
});

// text-to-speech
function speakText(text){
  if(!('speechSynthesis' in window)) return;
  const u = new SpeechSynthesisUtterance(text);
  u.lang = 'en-IN';
  speechSynthesis.cancel();
  speechSynthesis.speak(u);
}

// UI handlers
sendBtn.addEventListener('click', ()=> sendQuery(userInput.value));
userInput.addEventListener('keydown', (e)=> { if(e.key === 'Enter') sendQuery(userInput.value) });

quickBtns.forEach(b=>{
  b.addEventListener('click', ()=> sendQuery(b.dataset.q));
});

// Section simplifier (demo: we have canned simplifications)
simplifyBtn.addEventListener('click', async ()=>{
  const s = sectionInput.value.trim();
  if(!s) return;
  simplifyResult.innerText = "Simplifying...";
  // demo mapping
  const map = {
    "420": "Cheating and dishonestly inducing delivery of property.",
    "302": "Murder — causing death with intention or knowledge.",
    "376": "Rape — sexual assault punishable under IPC."
  };
  await new Promise(r=>setTimeout(r,600));
  simplifyResult.innerText = map[s] || "No demo entry. Replace this with AI summarizer or your legal content.";
});
