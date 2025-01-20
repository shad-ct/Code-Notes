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

-----------------------------------------------------

# ES6 
