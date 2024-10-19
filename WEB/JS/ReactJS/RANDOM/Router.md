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
     
     export default App;
