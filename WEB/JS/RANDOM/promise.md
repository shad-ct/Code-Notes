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
