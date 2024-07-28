# middleware : 
    var express = require('express')
    var bodyParser = require('body-parser')
    var app = express()
    app.listen(8080)

    app.use(function(req,res,next){
        next()
        // this is the middle function , everything comes here first then to the root given , use next() to continue to the root 
    })

    app.use(bodyParser.urlencoded({extended:false})) // used to access req body 

    app.get("/about",function(req,res){
        res.send("about page")
    })
    app.get("/login",function(req,res){
        res.send(req.body)
    })