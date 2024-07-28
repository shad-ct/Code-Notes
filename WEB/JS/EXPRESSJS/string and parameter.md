

# query string and parameters 
    // query string : student?name=shad&age=20
        app.get("/login",function(req,res){
        res.send(req.query)
    })

    // when its like /about/profile (aka params)
        app.get("/profile/:id",function(req,res){
           res.send(req.params.id)
    })
