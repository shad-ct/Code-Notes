```
function pro() {

  const [count, setCount] = useState(0);
  const [count2, setCount2] = useState(0);
  
  useEffect( () => {
    console.log('ran useEffect')
    console.log(count)
  },[count])

  console.log('Count2 : ' , count2)

  return (
    <>
    <button onClick={() => setCount(count + 1)}>+ : {count}</button>
    <h1> Hi , I am a component</h1>
    <button onClick={() => setCount2(count2 + 1)}>Count: {count2}</button>
    </>
  )
}
```

### Explanation : 
  The useEffect is called only when the web is rendered , without dependency, it will render everytime. (the dependency heree is [count] ). 
So, with dependency, it will run 2 times, when rendering for the first time and when the whenever the value of count changes. 


# To fetch data from API : 

```
  const [blogs, setBlogs] = useState(null)

  useEffect(() => {
    fetch('http://localhost:8080/blog')
      .then(response => response.json())
      .then(data => setBlogs(data))
      .catch( (e) => console.log(e.message) );
  }, [])
```
because we have used empty array at the end, this code will only execute once. but if there were no empty array or anything, it will run after every render


a typical useffect looks like : 

useEffect(function , [dependency])

the dependency is mainly an array, which tells when to re-render the whole page. here, whenever the dependency changes the callback functions is called. 
