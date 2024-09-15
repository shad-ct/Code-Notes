# creating a local server 
    var http=require('http')
    http.createServer(serverup).listen(3888)
    function serverup(yo,sup){
    sup.write('he')
    sup.end()
    }

# creating a html server :
    const http = require('http');
    const fs = require('fs');

    http.createServer(function (req, res) {
        fs.readFile('index.html',function(err,data){
        res.write(data);
        res.end();
        });
    }).listen(7000, function () {
        console.log('Server started on port 7000');
    });

# url module : 
    const http = require('http')
    const fs = require('fs')
    var url = require('url')

    http.createServer(function(req,res){
        var parsed = url.parse(req.url)
        fs.readFile("." + parsed.pathname,function(err,data){
            if(err){
                res.writeHead(404,{'Content-type':'text.html'})
                return res.end("error page not found")
            }
            res.writeHead(200,{'Content-type':'text.html'})
            res.write(data)
            res.end()
        })
    }).listen(8080)

# adding text into a text file : 
    var fs = require("fs")
    fs.writeFile("test.txt","text is added lol " , function(error){     
                                //  to add : fs.appendFile
                                //  to display the text from file : fs.readFile('filename.txt','utf8',function(e,data){console.log(data)})
                                //  to delete the file : fs.unlink("filename.txt",function(err){})
        if(error){
            console.log(error)
            }
    })

# nodemon 
    npm i nodemon 
    used to run the code auto when a change is seen 

# making module 
    # module.js
        const sum = function(a,b){
            return a+b}
            const mul = function(a,b){
            return a*b
        }
        module.exports = {
            add : sum ,
            prod : mul
        }
    # main.js
        var calc = require("./custom-module")
        console.log(calc.add(10,2))

# action after clicking button in html 
    <form action="/filename.html">
    // use if else statement in express of query string 
    // to hide query string we can set method="post" from method='get'
    
# when we submit a form the browser doesn't take the id but the name 
    eg : <input id="firstName" name="fname" value="shad">
    here the browser display fname=shad instead of firstName in url

# File control :
    var fs = require('fs')
    fs.writeFile('test.txt',"this is the message",function(err){
        if(err){
            console.log('there is an error creating the file')
        }
    })
    
### to add more data : 
    fs.appendFile('test.txt',"more messages",function(err){
        if(err){
            console.log('there is an error creating the file')
        }
    })
### read file : 
    fs.readFile('test.txt','utf8',function(err,data){
        if(err){
            console.log('theres an error')
        }
        else{
            console.log(data)
        }
    })

### delete file :  
    fs.unlink('test.txt',function(err){
        if(err){
            console.log('theres an error')
        }
        else{
            console.log('deleted')
        }
    })
