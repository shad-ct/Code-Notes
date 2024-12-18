## The first way : 

```
const express = require('express');
const app = express();
const PORT = 8080;
const key = "https://api.api-ninjas.com/v1/quotes?X-Api-Key=mOmuN/Y623xFWK6iRtLmdQ==Rwn9YNRPX62bbO0J";

app.get('/', (req, res) => {

    fetch(key)
    .then(function(res){
        return res.json();
    })
    .then(function(data){
        console.log(data,"Response is : ")
        
    res.send(`
        <html>
            <body>
                <h1>Quotes Of The Day:</h1>
            </body>
        </html>
    `);
    })

});

app.listen(8080)
```

---------------------

## Using async and sync : 
```
const express = require('express');
const app = express();
const PORT = 8080;
const key = "https://api.api-ninjas.com/v1/quotes?X-Api-Key=mOmuN/Y623xFWK6iRtLmdQ==Rwn9YNRPX62bbO0J";

app.get('/', (req, res) => {

    async function getData(){
        const res = await fetch(key)
        const data = res.json()
        dom(data)
    }
        
    res.send(`<html>
            <body>
                <h1>Quotes Of The Day:</h1>
                <p>${data.quote}</p>
            </body>
        </html>`);
    })

;

app.listen(8080)

```
