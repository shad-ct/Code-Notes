Installation : 

     npm i react-router-dom

Example :

     import { BrowserRouter, Routes, Route } from 'react-router-dom'
     import About from './components/about';
     
     function App() {
     
       return (
         <BrowserRouter>
           <h1>Hello world form APP.js</h1>
           <Routes>
             <Route path='/about' element={<About/>}/>
           </Routes>
         </BrowserRouter>
     
       );
     }
#

Using Link : 

     import { BrowserRouter, Routes, Route,Link } from 'react-router-dom'
     import About from './components/about';
     import Profile from './components/Profile';
     
     function App() {
     
       return (
         <BrowserRouter>
           <h1>Hello world form APP.js</h1>
     <div>
     <Link to="profile">Profile</Link>
     </div>
           <Routes>
             <Route path='/about' element={<About/>}/>
             <Route path="/Profile" element={<Profile />} /> 
           </Routes>
         </BrowserRouter>
     
       );
     }
     
     export default App;

- when you click on the "Profile" you'll get into that page 
