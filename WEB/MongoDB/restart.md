# Commands :

See all the DB: 
    
    show dbs

Delete a DB : 

    db.dropDatabase()

Create a collection : 

    db.createCollection("products");
    // to see collection : 
    show collections
    // delete collection : 
    db.products.drop()

Document inside collection : 

    db.products.insert(
    	{
    		product_name : "HP Laptop",
    		description : "6GB RRAM"
    	}
    )
    
    
    // to see : 
    
    db.products.find().pretty()

Edit document : 

    db.product.update({"product_name" : "HP laptop name mistake"} , {$set {"product_name" : "HP Laptop name fixed"}})


To delete all the doc : 

    db.product.remove({})    

Delete a doc using ID : 

    db.roduct.remove({product_name : "HP Laptop"})
    
    if u want to remove only 1 products named the above : 
    db.roduct.remove({product_name : "HP Laptop"},1)

Search something : 

    db.product.find({category : "Laptop"})
    
    // to get limited amound of data, first 2 etc..
    db.product.find({category : "Laptop"}).limit(2)
    
    // when u dont want first 2 : 
    
    db.product.find({category : "Laptop"}).limit(5).skip(2)

Conditional statement / query operators : 

    // when equal 
    db.product.find({price : {$eq:100}}) // here it prints product with price = 100
    db.product.find({price : {$gt:100}}) // here it prints product with price > 100
    $gte : >=
    $lt  : <
    $ne : !=
    $and : && 
    db.product.find({$and:[{category:{$eq:"laptop"}}, {price: {$eq : 100}}]})
    // get laptops with 100 rs 


















    
