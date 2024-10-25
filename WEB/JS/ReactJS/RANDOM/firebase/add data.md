# App.js 

    import firebase from 'firebase/compat/app';
    import './App.css';
    import { Firebase } from './firebase/config'
    import React, { useState } from 'react';
    
    function App() {
    
      const [name, setName] = useState('')
    
      const [age, setAge] = useState('')
    
      return (
    
        <>
    
          <button onClick={() => {
    
    
            Firebase.firestore().collection('Names').add({
              age: age,
              name: name,
              msg: ' hello world'
            })
          }}>Click me</button>
    
          <input placeholder='Enter your name :' onChange={(e) => setName(e.target.value)}></input>
    
    
          <input placeholder='Enter your age :' onChange={(e) => setAge(e.target.value)}></input>
        </>
    
      );
    }
    
    export default App;


# /firebase/config.js : 

    import firebase from 'firebase/compat/app';
    import 'firebase/compat/firestore';
    
    const firebaseConfig = {
      apiKey: "",
      authDomain: "fyimp-cs.firebaseapp.com",
      projectId: "fyimp-cs",
      storageBucket: "fyimp-cs.appspot.com",
      messagingSenderId: "",
      appId: "1:",
      measurementId: "G-JF7Z6M121L"
    };
    
    firebase.initializeApp(firebaseConfig);
    
    export const Firebase = firebase;

