# Array Helper methods : 

# 1. forEach
```
console.log('1. forEach')
var colors = ['red','blue','green']
colors.forEach((clr) => {
  console.log(clr)
})
```
# 2. Map
```
console.log('2. Map')
var numbers = [1,2,3,4];
var doubled = numbers.map((num) => {
  return num * 2;
})
console.log(doubled)
```
# 3. Filter 
```
console.log('3. Filter')
var products = [
  {name : 'tomato', type : 'fruit'},
  {name : 'orange' , type : 'fruit'},
  {name : 'carrot' , type : 'vegitable'}
]
var fruitSearch = products.filter((product) => {
  return product.type === 'fruit'
})
console.log(fruitSearch)
```
# 4. Find 
```
var users = [
  {name : 'Jill'},
  {name : 'sd'},
  {name : 'sap'},
  {age : 10}
]

var found = users.find( (user) => {
  return user.name === 'sd'
})

console.log(found)
```

# 5. Every and some  (kinda for all x and there exist an x)
```
var names = ['safwan'
, 'sappan',  
'guppy',
'joe'
]

foundEvery = names.every((name) => {
  return name.length > 4
})
foundSome = names.some((name) => {
  return name.length > 4
})
console.log(foundEvery)
console.log(foundSome)
```
# 6. Reduce
```
var numbers = [10,20,30]
var sum = 0;

var output = numbers.reduce( (sum,num) => {
    return sum + num
},0) // the 0 here is initial value to set. if u put 10 it i'll go 70 instead of 60

console.log(output)
```

# 7. sort : 

```
let numbers = [4, 2, 9, 1];
numbers.sort(); 
console.log(numbers); // Output: [1, 2, 4, 9]
```


-----------------------------------------------------

# Hoisting : 
it is the accessing of variables of functions even before it is initialized. (by default functions can be called before initilization). a display function cannot be accessed though.

reason : 
even before executing the code, the varaibles will be set as undefined by the JS itself. in the case of functions, when the function is called , the whole code of the function is called 

# First class function : 
in JS, Functions has the ability to pass another function as parameter and also return functions, this property of JS is called First Class Function.

# Call Back function : 
passing an annyonomus function to another function as parameter

eg : 
```
function x(y) {
    console.log("x called");
    y();
}

x(function () {
    console.log("anon called");
})

```
use : JS is a sync language, to make it async . it is even used in setTimout, setInterval etc..


# Higher order Function : 

a function that takes another function as argument or returns a function as a value 

