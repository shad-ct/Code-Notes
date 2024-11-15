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

Delete a doc using ID : 

    db.roduct.remove({product_name : "HP Laptop"})
    
    if u want to remove only 1 products named the above : 
    db.roduct.remove({product_name : "HP Laptop"},1)

    
