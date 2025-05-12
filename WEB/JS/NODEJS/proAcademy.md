<details>
  <summary># </summary>

```

```
</details>





<details>
<summary># readline : </summary>

```
const readline = require('readline');
const response = readline.createInterface({
    input: process.stdin
    , output: process.stdout
});

response.question('what is your name? ', (name) => {
    console.log(`Hello mr ${name}`)
    response.close();
});


response.on('close', () => {
    console.log('Goodbye!');
    process.exit(0);
})
```

</details>

<details> 

<summary># fs (file System)</summary>

```
const readline = require('readline');
const fs = require('fs');

// read file synchronously
let textinp = fs.readFileSync('./test.txt', 'utf8');
console.log(textinp);

// write file synchronously
fs.writeFileSync('./test.txt', `Hello World! ${textinp}`);
console.log('File written successfully!');
```
</details>


<details>
  <summary>Routing </summary>

```
const http = require('http');
const fs = require('fs');

const home = fs.readFileSync('./index.html');

const Server = http.createServer((req, res) => {
    let path = req.url;

    if(path === '/') {
        res.end(`${home}`);
    }
    else if(path === '/about') {
        res.end('about page')
    }
    else if(path === '/contact') {
        res.end('contact page')
    }
    else {
        res.writeHead(404, {'Content-Type': 'text/html'});
        res.end('<h1>404 Not Found</h1>');
    }
})
Server.listen(2000);
```
</details>



<details>
  <summary>Setting headers for Response</summary>

```
res.writeHead(200); || or


res.writeHead(200, {
    'Content-Type': 'text/html',
    'custom-header' : 'hello this is a custom header lol '
 });
```
</details>
