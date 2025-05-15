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

# Express Router : 
> Module.js 
```
    const express = require('express')
    const router = express.Router()
    
    router.get('/',(req,res)=>{
        res.send('This is a get ')
    })
    router.post('/',(req,res)=>{
        res.send('This is a post ')
    })
    router.put('/',(req,res)=>{
        res.send('This is a put ')
    })
    
    router.delete('/',(req,res)=>{
        res.send('This is a delete ')
    })
    
    module.exports = router 
```
> app.js
   ```
    const express = require('express')
    const app = express()
    const path = require('path')
    const moduleRouter = require('./routes/module.js')
    
    app.use('/module',moduleRouter)
    
    app.listen(2000, function(req,res){
        console.log('server is running on port 2000')
    })
```
## Route parameters 

    //const {id} = req.params
    //if(id == 'hi')   

    app.get('/:id',(req,res)=>{
        if(req.params.id == 'hi'){
            res.send('hello')
        }
        else{
            res.send('not found')
        }
    })
## File downloading : 

    const path = requrie('path')
    app.get('/down',(req,res)=>{
        res.download(path.join(__dirname,'hi.txt'))
    })
