    const promise = require('promise')
    
    function add(num1,num2){
        return new Promise((resolve,reject)=>{
            if(num1==0){
                reject('first num cant be 0')
            }
            resolve(num1+num2)
        })
    }
    
    function product(num1,num2){
        return new Promise((resolve,reject)=>{
            if(num1==0){
                reject('first num cant be 0')
            }
            resolve(num1*num2)
        })
    }
    
    function div(num1,num2){
        return new Promise((resolve,reject)=>{
            if(num1==0){
                reject('first num cant be 0')
            }
            resolve(num1/num2)
        })
    }
    
    add(10,20)
    .then((sum)=>{
        console.log(sum)
        return product(sum,sum)
    })
    .then((product)=>{
        console.log(product)
        return div(product,10)
    })
    .then((div)=>{
        console.log(div)
    })
    .catch((err)=>{
        console.log(err)
    })



# Syncing 2 tasks with different time into 1 using promise : 

    const promise = require('promise')
    
    function getName(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{
                resolve("shad")
            },3000)
        })
    }
    
    function getAge(){
        return new Promise((resolve,reject)=>{
            setTimeout(()=>{
                resolve(18)
            },2000)
        })
    }
    
    Promise.all([getName(),getAge()]).then((result)=>{
        console.log(result) 
    // the values from name and age stores into an array , and prints at the same time, it is to sync the task at one
    })
