# for updating with id : 
```
    const updatedProduct = await Product.findByIdAndUpdate(id, product, {
      new: true,
    });
```
note : the Product here is the schema, product is the updates text coming from req.body.

# to get all data : 
```
Product.find();
```

# to delete with id : 
```
Product.findByIdAndDelete(id);
```

# adding a new data : 
```
    const newProduct = new Product({ name, price, description });
    await newProduct.save();
```
