# Points to note : 

- ADD : ``await addDoc(userCollectionRef,{name:newName, age : newAge})``
- 

## Config.js

    import { initializeApp } from "firebase/app";
    import { Firestore, getFirestore } from "firebase/firestore";
    
    
    const firebaseConfig = {
        apiKey: "AIzaSyDwyfDhL8INx98VFzdqeh6xlj264JWcAsE",
        authDomain: "fyimp-cs.firebaseapp.com",
        projectId: "fyimp-cs",
        storageBucket: "fyimp-cs.appspot.com",
        messagingSenderId: "510676784309",
        appId: "1:510676784309:web:563f5f3f6191607d915afc",
        measurementId: "G-JF7Z6M121L"
    };
    
    const app = initializeApp(firebaseConfig)
    
    export const db = getFirestore(app)

## App.js : 

    import { useState, useEffect } from "react"
    import { db } from "./firebase/config"
    import { collection, getDocs,addDoc } from "firebase/firestore"
    
    function App() {
      const [users, setUsers] = useState([])
    
      const userCollectionRef = collection(db, 'users')
    
      useEffect(() => {
        const getUsers = async () => {
          const data = await getDocs(userCollectionRef);
          setUsers(data.docs.map((doc) => ({ ...doc.data(), id: doc.id })))
          console.log(users)
        }
    
        getUsers()
      }, [])
    
    
      const [newName,setNewName] = useState('')
      const [newAge,setNewAge] = useState(0)
      const createUser = async () => {
    await addDoc(userCollectionRef,{name:newName, age : newAge})
      }
    
      return (
        <>
    
        <input placeholder="Name : " onChange={(e)=> {setNewName(e.target.value)}}/>
        <input type="number" placeholder="Age :" onChange={(e)=> {setNewAge(e.target.value)}} />
    <button onClick={createUser}>Submit</button>
    
    
        {users.map((user) => {
          return (
            <div>
              {""}
              <h1>Name : {user.name}</h1>
              <h2>Age : {user.age}</h2>
            </div>
          )
        })}
        </>
      )
    }
    
    export default App