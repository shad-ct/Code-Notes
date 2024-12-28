## Index.html : 

```
const express = require('express')
const app = express()
const mongoose = require('mongoose')
const Product = require('./models/product_models')

app.use(express.json())

app.get('/',(req,res) => {
    res.send('Hello World')
})


app.get('/api/products', async (req, res) => {
    try {
      const products = await Product.find({});
      res.status(200).json(products);
    } catch (error) {
      res.status(500).json({message: error.message});
    }
  });
  

app.post('/api/products', async (req,res) => {
    try{
        const product = await Product.create(req.body)
        res.status(200).json(product)
    }
    catch(err){
        res.status(500).json({message:err.message})
    }
})

app.listen(8080)



mongoose.connect('mongodb+srv://mern123:<pass>@mernproject.xokaf.mongodb.net/Node-API?retryWrites=true&w=majority&appName=mernproject')
  .then(() => console.log('Connected!'))
  .catch(() => {
    console.log('error found')
  })
```




## Models/products_models.js : 


```
const mongoose = require("mongoose");

const ProductSchema = mongoose.Schema(
  {
    name: {
      type: String,
      
    },

    quantity: {
      type: Number,
      required: true,
      default: 0,
    },

    price: {
      type: Number,
      required: true,
      default: 0,
    },

    image: {
      type: String,
      required: false,
    },
  },
  {
    timestamps: true,
  }
);


const Product = mongoose.model("Product", ProductSchema);

module.exports = Product;

```

[Read more](https://github.com/haris-bit/simple-crud-app-backend)



[![watch](https://img.youtube.com/vi/_7UQPve99r4/maxresdefault.jpg)](https://youtu.be/_7UQPve99r4?si=7jbMdD-i-n5TUCVI)
