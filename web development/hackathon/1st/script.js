document.addEventListener('DOMContentLoaded', () => {
    // DOM Elements
    const chatMessages = document.getElementById('chat-messages');
    const userInput = document.getElementById('user-input');
    const sendBtn = document.getElementById('send-btn');
    const micBtn = document.getElementById('mic-btn');
    const cameraBtn = document.getElementById('camera-btn');
    const imageUpload = document.getElementById('image-upload');
    const quickActionsContainer = document.getElementById('quick-actions');
    const toggleFarmer = document.getElementById('toggle-farmer');
    const toggleConsumer = document.getElementById('toggle-consumer');

    // State
    let currentUserRole = 'farmer'; // 'farmer' or 'consumer'
    let isAITyping = false;

    // Quick Action Prompts
    const quickActions = [
        'Crop Demand',
        'Weather Alert ⛈️',
        'Govt Schemes',
        'Market Price',
        'Pest Check 🪰'
    ];

    // --- Core Functions ---

    /**
     * Appends a message bubble to the chat container.
     * @param {string} text - The message content.
     * @param {boolean} isSender - True for user (sender), false for bot.
     * @param {string} imageUrl - Optional URL for an uploaded image.
     */
    function appendMessage(text, isSender, imageUrl = null) {
        const messageDiv = document.createElement('div');
        messageDiv.classList.add('message');
        messageDiv.classList.add(isSender ? 'user-message' : 'bot-message');

        if (imageUrl) {
            const img = document.createElement('img');
            img.src = imageUrl;
            img.style.maxWidth = '100%';
            img.style.borderRadius = '10px';
            img.style.marginBottom = '8px';
            messageDiv.appendChild(img);
        }

        const p = document.createElement('p');
        p.innerHTML = text; // Use innerHTML for basic formatting like **bold**
        messageDiv.appendChild(p);
        
        // Using insertBefore(element, reference) to add new messages to the top 
        // while the container's CSS flex-direction: column-reverse handles the visual order.
        chatMessages.insertBefore(messageDiv, chatMessages.firstChild);
        chatMessages.scrollTop = chatMessages.scrollHeight; // Keep scroll near bottom (visual bottom)
    }

    /**
     * Simulates the AI response logic. In a real app, this calls your Node.js backend API.
     * @param {string} query - The user's query.
     */
    async function getAIResponse(query) {
        let response = '';
        
        // Simulate API call delay
        await new Promise(resolve => setTimeout(resolve, 1500));

        if (query.includes('Pest Check')) {
            response = 'Please use the **camera icon (📸)** to upload a clear picture of the affected crop leaf so I can run a disease analysis.';
        } else if (query.includes('Weather')) {
            response = 'Checking the forecast... The next **48 hours show heavy rain** in your area. Please delay irrigation and secure your harvest.';
        } else if (query.includes('Govt Schemes')) {
            response = 'The **PM-KISAN Scheme** is currently accepting registrations. It offers financial support of ₹6,000 per year. Do you want the official link?';
        } else if (currentUserRole === 'farmer') {
            response = `Hello, Farmer! I see your query about "${query}". I suggest checking the **Market Price** button for local commodity rates.`;
        } else {
            response = `Hello, Consumer! I received your message: "${query}". You can use the **Crop Demand** button to see future produce availability.`;
        }
        
        // Remove typing indicator before adding response
        removeTypingIndicator();
        appendMessage(response, false);
        isAITyping = false;
    }

    /**
     * Handles sending the message from the input field or a quick action button.
     * @param {string} text - The message text.
     */
    function sendMessage(text) {
        if (isAITyping) return;

        const messageText = text || userInput.value.trim();
        if (messageText === '') return;

        // 1. Add user message
        appendMessage(messageText, true);
        userInput.value = '';
        
        // 2. Add typing indicator and get response
        showTypingIndicator();
        getAIResponse(messageText);
    }

    // --- UI/Utility Functions ---

    function showTypingIndicator() {
        if (!isAITyping) {
            const indicator = document.createElement('div');
            indicator.classList.add('typing-indicator');
            indicator.id = 'typing-indicator';
            indicator.textContent = 'AgriConnect is typing...';
            chatMessages.insertBefore(indicator, chatMessages.firstChild);
            isAITyping = true;
        }
    }

    function removeTypingIndicator() {
        const indicator = document.getElementById('typing-indicator');
        if (indicator) {
            indicator.remove();
        }
    }

    function generateQuickActions() {
        quickActionsContainer.innerHTML = '';
        quickActions.forEach(text => {
            const button = document.createElement('button');
            button.classList.add('quick-action-btn');
            button.textContent = text;
            button.addEventListener('click', () => {
                if (text === 'Pest Check 🪰') {
                    // Trigger image upload if it's the Pest Check button
                    imageUpload.click();
                } else {
                    sendMessage(text);
                }
            });
            quickActionsContainer.appendChild(button);
        });
    }

    // --- Event Listeners ---

    // Send button click
    sendBtn.addEventListener('click', () => sendMessage());

    // Enter key press in input field
    userInput.addEventListener('keypress', (e) => {
        if (e.key === 'Enter') {
            sendMessage();
        }
    });

    // Camera button click (triggers the hidden file input)
    cameraBtn.addEventListener('click', () => {
        imageUpload.click();
    });

    // Handle Image Upload
    imageUpload.addEventListener('change', (event) => {
        const file = event.target.files[0];
        if (file) {
            const imageUrl = URL.createObjectURL(file);
            const userMessageText = 'Image uploaded for disease analysis.';
            
            // 1. Add user message with image preview
            appendMessage(userMessageText, true, imageUrl);
            
            // 2. Simulate image processing
            showTypingIndicator();
            
            // In a real app, this sends the file to your Node.js backend.
            setTimeout(() => {
                removeTypingIndicator();
                const analysisResult = 'Analysis Complete: Your crop shows early signs of **Late Blight**. Apply a copper-based fungicide immediately. See the "Govt Schemes" button for subsidy details.';
                appendMessage(analysisResult, false);
                isAITyping = false;
            }, 4000); // Simulate 4 second processing time
        }
    });

    // Role Toggle Logic
    function handleRoleToggle(newRole) {
        if (newRole === currentUserRole) return;
        
        currentUserRole = newRole;
        
        // Update button styles
        toggleFarmer.classList.remove('selected');
        toggleConsumer.classList.remove('selected');
        document.getElementById(`toggle-${newRole}`).classList.add('selected');

        // Clear chat and send a new welcome message
        chatMessages.innerHTML = '';
        const welcomeMessage = newRole === 'farmer' 
            ? "Welcome, Farmer! How can I help you manage your crops today?"
            : "Welcome, Consumer! I can help you find crop market data.";
        appendMessage(welcomeMessage, false);
    }

    toggleFarmer.addEventListener('click', () => handleRoleToggle('farmer'));
    toggleConsumer.addEventListener('click', () => handleRoleToggle('consumer'));
    micBtn.addEventListener('click', () => alert('Voice-to-Text feature is coming soon!'));

    // Initialize quick actions on load
    generateQuickActions();
});