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
  <summary># </summary>

```

```
</details>

