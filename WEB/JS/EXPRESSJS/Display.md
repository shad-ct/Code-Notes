# making display based on root 
    var express = require('express')
    var app = express();
    app.listen(8080)
    app.get('/',function(req,res){
        res.send("index page")
    })

    app.get('/hey',function(req,res){
        res.send("this is hey page")
    })

    app.get("/hello",function(res,req){
        req.send("hello page is here")
    })


# else : 


    app.get("*",function(res,req){
        req.send("404 error")
    })
