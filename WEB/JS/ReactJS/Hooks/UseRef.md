Imagine you have used useEffect to find how many times the page has been rendered. The value will be infinite, it will re-render itself
![image](https://github.com/user-attachments/assets/5039481e-2d4e-4a39-bff9-83ef6cdcc429)
explanation : when the value of render count increase to 1, it means that the web has been rendered once, because it has been rendered, the useffect is called again... this goes forever.
to Fix this we use UseRef. 

![image](https://github.com/user-attachments/assets/5c047875-9b73-4758-bbcd-847de44f037b)

here, count.current is because the useRef returns the initialValue as object. so we use count.current

# Its another use is in DOM manipulation

```
import React, {useRef} from 'react';
function App() {
  const inputElem = useRef();
  const btnClicked = () => {
    console.log(inputElem.current);
    inputElem.current.style.backgroundColor = 'red';
    inputElem.current.style.color = 'white';
  }
  return (
    <>
      <input type="text" ref={inputElem} />
      <button onClick={btnClicked}>Click Here</button>
    </>
  );
}
export default App;
```



BASICALLY, WHEN YOU CANT DIRECTLY ACCESS THE INPUT VALUE , from input when the submit is from a button. like refering it with an id or ref value.


```
import { useRef } from "react"


function App() {


  const numRef = useRef(0);

  console.log(numRef);

  function plusNum() {
    console.log(numRef.current.value);
  }
  return (
    <>
      <input ref={numRef} placeholder="enter your number" />
      <button onClick={plusNum}>SUBMIT</button>

    </>
  )
}

export default App

```
