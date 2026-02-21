> npm i mysql2

## Connecting to mysql : 
```
const mysql = require('mysql2');

const pool = mysql.createPool({
    host: 'localhost',
    user: 'mysql',
    password: 'root',
    database: 'learning'
}).promise();

```


## get all data from table : 
```

async function getNotes() {
    const [rows] = await pool.query('SELECT * FROM notes');
    console.log(rows);
}

getNotes();

```
