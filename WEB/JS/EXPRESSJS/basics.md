# Installation : 

```
npx express-generator express-app
```

# Params : 

```
app.get('/flight/:from-:to', (req, res) => {
    res.send(`Flight from ${req.params.from} to the ${req.params.to} airport `)
});

app.get('/:category/:id', (req, res) => {
    res.send(`${req.params.category} with the id of ${req.params.id}`)
})

app.get('/place/:state.:dist', (req, res) => {
    res.send(`State ${req.params.state } and district ${req.params.dist}`)
});
```

eg : 
| param                                | output                          |
|------------------------------------|--------------------------------------|
| http://localhost:3000/flight/10    | Laptop with the ID of 10            |
| http://localhost:3000/flight/kannur-kochi | Flight from Kannur to Kochi airport |
|http://localhost:3000/place/kerala.kannur|State kerala and district kannur|
