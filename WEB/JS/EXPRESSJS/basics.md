# basic : 
    const express = require('express')
    const app = express()
    app.get('/',function(req,res){
        res.send('hello world ')
    })
    app.get('/hey',function(req,res){
        res.send('hey world ')
    })

    app.listen(300,function(){
        console.log('server is running')
    })


# extra tips : 
    console.log(__filename)
    console.log(__dirname)