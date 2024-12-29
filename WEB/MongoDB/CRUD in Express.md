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








---------------------------------------
-------------------------------------------
----------------------------------



## Another example : 


### Index.js

```
// Import required packages
import express from "express";
import mongoose from "mongoose";
import dotenv from "dotenv";

// Create an Express app
const app = express();

// Load environment variables from .env file
dotenv.config();

// Set the port from environment variables or default to 7000
const PORT = process.env.PORT || 7000;

// Get the MongoDB connection URL from environment variables
const MONGOURL = process.env.MONGO_URL;

// Connect to MongoDB and start the server
mongoose.connect(MONGOURL).then(() => {
  console.log("Database connected successfully.");
  app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
  });
});

// Define the schema for the user data using Mongoose
const userSchema = new mongoose.Schema({
  name: String,
  age: Number,
});

// Create a Mongoose model called "UserModel" based on the userSchema
const UserModel = mongoose.model("users", userSchema);

// Set up a route in the Express application to handle GET requests to "/getUsers"
app.get("/getUsers", async (req, res) => {
  // Await fetching all user data from the database using the UserModel
  const userData = await UserModel.find();
  // Send the user data as a JSON response
  res.json(userData);
});
```


### .env : 

```
PORT = 8000
MONGO_URL = "mongodb://localhost:27017/dbconnect"
```




-------------------------------
---------------------------------
---------------------------------
----------------------------------





```
const express = require("express");
const mongoose = require("mongoose"); 843.3k (gzipped: 228.1k)

const app = express();

//1 connect to mongodb
mongoose.connect("mongodb://127.0.0.1:27017/testDB")

//2 check
const db = mongoose.connection;

db.on("error", console.error.bind(console, "connection error: "));
db.once("open", function () {
    console.log("Connected successfully");
});

//3 create schema
const userSchema = new mongoose.Schema({
    name: String,
    age: Number
})

//4 create model
const UserModel = new mongoose.model("User", userSchema)

app.get("/", async (req, res) => {
    const data = await UserModel.create({name: "manu", age: 13})
    res.send("hello");
})

app.listen(3000, () => {
    console.log("server running on port 3000");
});
```
