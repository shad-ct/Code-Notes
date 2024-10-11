# Mounting : 
addition of a div or whatever into a component 
# Unmounting : 
removal of a div or whatever in a component 
# Updating : 
changing something in the div of a component
## Remember : when you mount or unmount its not about visibilty removal like in css. its real removal of the div!!

# Example : 

<p>The Show/Hide button here does the mounting and unmounting . The Add button does the updating.</p>
### App.js : 
    import Counter from './component/Counter'
    import {useState} from 'react'
    function App() {
    
      const [state,setState] = useState(false)
    
      return (
        <>
    <button onClick={()=>setState(!state)}>Show/Hide</button>
    
    {
      state && <Counter/>
    }
        </>
      )
    }
    
    export default App;


### Counter.js : 

    import React from 'react';
    import {useState} from 'react'
    
    function Counter() {
    
        const [count,setCount] = useState(0)
    
      return (
        <>
    <h1>Hello world</h1>
    <h1>Count : {count}</h1>
    <button onClick={()=>setCount(count+1)}>Add</button>
        </>
      );
    }
    
    export default Counter;
        export default Counter;


[f5148f97-8551-479c-a6a2-6437091c6b35.webm](https://github.com/user-attachments/assets/a757fb65-6b3f-43b4-9ba6-4003ee9755fd)


