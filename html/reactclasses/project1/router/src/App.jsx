
import Home from './Home'
import About from './About'
import Contact from './contact'
import { BrowserRouter ,  Routes , Link , Route } from 'react-router'
function App() {
  return (
    <>
    <BrowserRouter>

<nav>
  <div className='bg-gray-500'>
  <Link  to='/'>Home </Link>
  <Link to='/About'>About</Link>
  <Link to='/Contact'>Contact </Link>
  </div>
</nav>
<Routes>
  <Route path='/' element={<Home />}></Route>
  <Route path='/About' element={<About/>}></Route>
  <Route path='/Contact' element={<Contact/>}></Route>
</Routes>

    </BrowserRouter>
    
    </>
  )
}

export default App
