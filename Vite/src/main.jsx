import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import Header from './Header.jsx'
import Container from './container.jsx'
createRoot(document.getElementById('root')).render(
  <StrictMode>
    <Header />
  <Container/>
  </StrictMode>,
)
