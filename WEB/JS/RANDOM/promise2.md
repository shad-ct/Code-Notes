# Promise explained : 

here , the res : resolve and rej is rejection, if the conditions are true then the res will be true if its false then rej will be called. to be called we use .then and .catch .
.then if for displaying if its true and .catch for error handling 


    const pro = new Promise((res,rej)=>{
        let a = 1
        
        if(a == 10){
            res()
            console.log(' a == 10')
        }
        else{
            rej()
            console.log(' 10 != a')
        }
    })
    
    pro.then(()=>{
        console.log("done working pheww +ve ")
    }).catch(()=>{
        console.log("it aint working yaar")
    })
