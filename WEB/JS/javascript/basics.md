
# Push 
    to get listed data from html to js 

let heading = document.querySelector('.he')


# if else short

    console.log(sup ? "print if true" : "this if false")

# Modules in JS 
    <script>
    import {function_name} from "./file_name";
    </script>

    to import all, 
    import * as something from './file_name';
        console.log(something.sum(39,20))

# just like echo thing : 
    something = window.prompt("enter your name )
    console.log(something)

# to add var name with - in it  : 
    console.log(["lol-time"]), this notation can also be used instead of . notation in object



# .innerText  doesnt care ab the space in words, but .innerHTML does 

# add class to an element : 
    element.classList.add('class-name')

# setTimeout : 
    setTimeout(function(),time in ms )
    function happens after the given time 
# setInterval 
    setInterval(function(),time)
    function repeats after the time

# Modules , we uses this when we have same variable in different js file 
    file 1 : 
       export  const cart[];
    
    file 2 (main): 
    <scirpt type = "module" src =">
        import {cart} from '/file1.js'


# Exporting modules : 
```
// greetings.js :
function hello(){
    console.log("hello");
}
module.exports = hello;   => to export multiple . module.exports = {funtion1, function2}


//index.js :
const greet = require('./greetings')  => to import multiple . const {funtion1, function2} = require('./greeetings')
greet()
 
```

method 2 : 

```
export function hello(){
    
}

import {hello} from "./greetings.js"
```


method 3 : 

```
export default function hello(){
}

import hello from "./greetings.js"
```
