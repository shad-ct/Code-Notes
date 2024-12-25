### Infer Types :
```
let name = "Shad"
let name = 10; // this shows an error in TS , in name we can only pass strings RN!!
```
---------------

### Defining Types :
```
let name: string = "Shad" // explicitly assigning the type of the var
```
--------------------------

### Basic Types :
```
let age: number = 25
let name: string = "Bob"
let isStudent: boolean = true
let numbers: number[] = [1, 2, 3, 4, 5]
let something:any = 29 // this can be anything, string, bool, num anything....


array of string :
let arr : string[] = ["shad","hey"]
let empty : [] = [] // an empty array , you gotta specify the type for other arrays
```
--------------------------


### object : 
```
let obj : {name:string ; age : number} = {
    name : "shad",
    age : 19
}
```

### Interfaces
Interfaces define the structure of an object in TypeScript.

Eg :
```
interface Person {
    name: string;
    age: number;
    getname : () => void;
}
let person1 : Person {
    name : "shad";
    age : 19,
    getName(){
        consolce.log(this.name)
    }
}
```

-----------

```
### Type : 

type Details = {
    name : string;
    age : number;
    getName = () => void;
}

let userDetails : Details = {
    name : "shad",
    age : 19;
    getName(){
        console.log(this.name);
    }
}
```

### Union : 
NB : this can be for any data type even type or even interface . eg : 

```
type Details = {
    name : string;
    age : number | string;  // one can enter the age as string or integer
    getName = () => void;
}

in the case of array :

let name : (string|number)[] = [1,"shad"]
```

### Optional : 
it means that you can either enter it or not. Not necessary. eg : 

```
type Details = {
    name : string;
    age ?: number; // here you can either your age or not. and you can continue . yet you cannot change the type though. cannot to string i mean.
}
``` 
