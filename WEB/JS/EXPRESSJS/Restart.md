# Simple rooting and stuff
    var express = require('express')
    var app = express();
    app.listen(2030) // for port 

    app.get('/',function(req,res){
        res.send('Hello World!')
    })
    
    app.get('/hello',function(req,res){
        res.send('How are you World!')
    })
