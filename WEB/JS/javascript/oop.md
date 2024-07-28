
# copy a object : 
    let copy = Object.assign(original)
# to prevent copying/editing 
    object.freeze(original)

# Array 
    #deleting : delete array[0]
    # adding : 
        to the end : array.push('blah')
        to the start : array.unshift('hsh')
    # Removing 
        from end : array.pop
        from start : array.shift
    # Splicing and Slicing 
        const spliced = array.splice(0,3) // cut from 0 to 3
        console.log('spliced shit : ',spliced) 

        const slice = array.slice(0,3) //copy from 0 to 3
        
# when you want to have the out name same as in inner name in object : 
    eg : const message = obj.message;
    instead you can use , 
    const{message} = obj


# class : 
    class something{
        name = undefined; //use ; instead of , 
    }
# class to object : 
    const somethin' = new something();


# for calculator you can .eval() function to do the thing

# object : 
    player = {
        name : "shad",
        id : "01"
    }
# class : 
    class player{
        constructor(name,id){
            this.name=name;
            this.id=id
        }
    let player1 = new player("shad",01)
    console.log(player1.name)

# inheritance :  

class main{
        constructor(name,id){
            this.name=name;
            this.id=id
}
class subClass extends main{

}
let player1 = new subClass("shad","01") ;
    console.log(player1.name)

# heap and stack memory : 
    in stack the data is copied and pasted      // scope inside a {}
    in heap the data's position/code is used    // scope inside the whole project 

# closure : 
    function parent(a,b){
        function child(){
            const c = a+b;
            return c;
        }
    }  
    method of accessing variable of parent function in child 

# spread operator 
    var a = [1,2,3,4]
    var b = [...a]
    var c = a;
    console.log("a is : "+a +"\n" + "b is : "+b +"\n" +"c is : " +c)

    in case of a and c , the memory position is copy pasted ,
    in case of a and b , the whole data is copy pasted 

# Destructuring assignment 
    const obj1 = {
        name : "shad",
        age : 21
    }
    function fun(){
        const name = obj1.name;
        const age = obj1.age;
    }

    you can stop tying name,age again in the function by : 
        
        function fun(){

            const {
            name,age
            }=obj1;
            console.log(name,age)
        }

# foreach : // just like a loop printing an array 
    const arr =[
        {
            name : 'ahsd',
            age : '10'
        },
    {
        name : '123hsdasdf',
        age : '2343'
        }
        ]
        var sup = arr.forEach(function(items){
        console.log(items)
    })

# Find 
    const arr =[
    {
      name : 'ahsd',
      age : '10'
    },
    {
      name : '123hsdasdf',
      age : '2343'
   }
  ]
  var sup = arr.find(function(items){
    return items.age < 40;
  })

  console.log(sup)


# use filter instead of find to get more than one result which matches the rule

# use reduce to combine all the elements  

# find method, used to find if there's a character in the paragraph or string 

    <p>The test() method returns true if it finds a match, otherwise false.</p>

    <p>Search a string for the character "e":</p>

    <p id="demo"></p>

    let text = "The best things in life are free";
    let pattern = /z/;
    let result = pattern.test(text)

# Promise : 
    // to make async process syn : Promise.all([function1(),function2()]),then((result)=>{
        console.log(result)
    })

 # Async and await 
    imagine if the task takes 3 sec or more, you'll have to wait till the data is here right? but with async and await, you can do other stuff while the data is being fetched, and when the data is ready, you can use it.
    async function getUser(){
        let name = await getName()
        console.log(name)
    }

