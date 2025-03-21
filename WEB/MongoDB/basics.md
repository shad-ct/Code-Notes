# to start in linux : 
    sudo systemctl start mongod
    sudo systemctl status mongod

![image](https://github.com/user-attachments/assets/a82426f5-d7e8-4be9-9550-fcf8554efe98)

# in sql we use table/structured data but in no sql its ab key-values 

# CRUD
    # C - Create
    # R - Read
    # U - Update
    # D - Delete

# category(set): collection , data(element): document

# database => collection : users => document : data of users 
# to add table : use 
# queries : 
    use sample :                                                            To switch to that file to edit
    db :                                                                    list all the available db
    db.createCollection("user") :                                           to create collection 
    show collections :                                                      list all the collections in that db
    db.user.insert({"name":"shad","age":18}) :                              add data
    db.user.find() :                                                        display the collection data 
    db.user.find({"name":"shad"}) :                                         display the collection data with name shad
    db.user.find().pretty()
    db.dropDatabase :                                                       delete database
    db.user.drop() :                                                        delete collection
    db.posts.deleteOne({ "_id": ObjectId("6764ce3dc185f49414893bf9") })     delete a document
    db.user.update({"name":"shad"},{"$set":{"age":19}}) :                   update
    db.user.insertMany([{"name" : "shad", age : 18},{"name" : jaseel}]) :   add multiple data at a time  | insert many
    db.user.find({"place" : "kannur"}).pretty() :                           find only specified data
    db.user.find({"age" : {$gt:25}}).pretty() :                             find ppl age greater than 25 
    db.user.find({"age" : {$lt:25}}).pretty() :                             find ppl age less than 25
    db.user.find({"age" : {$gte:25}}).pretty() :                            find ppl age greater than or equal 
    db.posts.find().sort({title:-1})                                        sort in decenting order, for ascending order, use 1 
    db.posts.find({title : {$ne : 'blog1'} } )                              ne : not equal to
    
    
    
