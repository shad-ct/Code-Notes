const promise = require('promise')
function add(num1,num2){
    return new Promise((resolve,reject)=>{
        resolve(num1+num2)
    })
}
add(10,20).then((sum)=>{
    console.log(sum)
})
