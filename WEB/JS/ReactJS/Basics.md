## Installation :

``npx create-react-app myapp``

## Using css in jsx of react : 

hello

    > App.js
    import './style.css'


# props : 

```
// pro.jsx

function pro(props) {
const {a, name} = props
  return (
    <div>
      <h1>{props.a}</h1>
      <h1>{props.name}</h1>
      <h1>{name}</h1>
      <h1>{a}</h1>
    </div>
  )
}



// App.jsx

function App() {
  const a = 10;
  return (
    <>
      <Pro name = "shad" a = {a}/>
    </>
  )
}
```


### another method : 

```
// pro.jsx

function pro({ name, age }) {
  return (
    <div>
      <h1>{name}</h1>
      <h1>{age}</h1>
    </div>
  )
}

// App.jsx

function App() {
  const a = {
    name : 'shad',age : 25,}
  return (
    <>
      <Pro {...a} />
    </>
  )
}
```

### or : 

```
function pro({...a}) {
  return (
    <div>
    <h1>{a.age}</h1>
    </div>
  )
}
```


# remember : return statement happens when unmounting (hiding)
