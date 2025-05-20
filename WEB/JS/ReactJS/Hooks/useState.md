
``
const increaseByFour = () => {
  setCount(count+1); // 0 + 1
  setCount(count+1); // 0 + 1
  setCount(count+1); // 0 + 1
  setCount(count+1); // 0 + 1
}
``

even though they are called 4 times, the output will be the same, 1.

to fix this : 

```
const increaseByFour = () =>{
  setCount( (preVal) +> {preVal+1} ) // 0 + 1 = 1
  setCount( (preVal) +> {preVal+1} ) // 1 + 1 = 2
  setCount( (preVal) +> {preVal+1} ) // 2 + 1 = 3
  setCount( (preVal) +> {preVal+1} ) // 3 + 1 = 4
}
```
