// server.js

// 1. Setup Environment and Dependencies
const express = require('express');
require('dotenv').config(); // Load environment variables from .env
const { GoogleGenAI } = require('@google/genai');

const app = express();
const port = 3000;

// Initialize the GoogleGenAI instance with the API key from .env
const ai = new GoogleGenAI({ apiKey: process.env.GEMINI_API_KEY });
const model = "gemini-2.5-flash"; // A fast, capable model

// Middleware to parse JSON bodies
app.use(express.json());

// Middleware to handle CORS (Crucial for frontend communication)
app.use((req, res, next) => {
    // Replace '*' with your actual frontend domain for production security
    res.setHeader('Access-Control-Allow-Origin', '*'); 
    res.setHeader('Access-Control-Allow-Methods', 'POST, OPTIONS');
    res.setHeader('Access-Control-Allow-Headers', 'Content-Type');
    next();
});

// 2. Define the API Endpoint
app.post('/generateLegalAnswer', async (req, res) => {
    const { prompt } = req.body;
    
    if (!prompt) {
        return res.status(400).json({ error: 'Missing prompt in request body.' });
    }

    try {
        // Define the AI's persona and instructions
        const systemInstruction = `You are Law Lens, an expert legal AI specializing in Indian law. Your core function is to simplify complex legal concepts and sections (like IPC). Provide accurate, simple, and educational answers, but your response MUST begin with a clear, bolded **Disclaimer:** stating that you are not a substitute for a lawyer and that the user should consult an actual legal professional.`;

        const response = await ai.models.generateContent({
            model: model,
            contents: [
                { role: "user", parts: [{ text: prompt }] }
            ],
            config: {
                systemInstruction: systemInstruction,
                temperature: 0.2 // Lower temperature for more factual, less creative output
            }
        });

        const generatedText = response.text;

        // 3. Send the AI's response back to the frontend
        res.json({ generatedText: generatedText });

    } catch (error) {
        console.error('Error calling Gemini API:', error);
        // Send a generic error message back to the frontend
        res.status(500).json({ 
            error: 'Internal server error while fetching legal information.' 
        });
    }
});

// 4. Start the Server
app.listen(port, () => {
    console.log(`Law Lens backend listening at http://localhost:${port}`);
});