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
```
--------------------------

### Interfaces
Interfaces define the structure of an object in TypeScript.

Eg :
```
interface Person {
    name: string;
    age: number;
}
function greet(person: Person) {
    return `Hello, ${person.name}!`;
}
```
