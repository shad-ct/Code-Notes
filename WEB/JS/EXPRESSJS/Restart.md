## Simple rooting and stuff
    var express = require('express')
    var app = express();
    app.listen(2030) // for port 

    app.get('/',function(req,res){
        res.send('Hello World!')
    })
    
    app.get('/hello',function(req,res){
        res.send('How are you World!')
    })
## linking to html : 
    const express = require('express')
    const app = express()
    const path = require('path')

    app.listen(2000, function(req,res){
    console.log('server is running on port 2000')
    })

    app.get('/',(req,res)=>{
     res.sendFile(path.join(__dirname,'index.html'))
    })
## get static files like img etc

    app.use(express.static('public')) // public is the folder name containing images
// to open you can do eg : http://localhost:2000/img.png or even the folders inside the public folder 
