# connecting : 
> mysql -u username -p

# show all database : 
> show databases;

# create database : 
> create database dbName;

# use or open database :
> use dbName;

# see tables in database : 
> show tables from dbName;

# create table in databse : 
>  create table tablename(id int  primary key , name varchar(50), age int unique not null);

# show table data : 
> select * from tablename;

# add data into table : 
```
mysql> insert into students(id,name,age) values(1,"Shad",20),
    -> (2,'Aisha',22),
    -> (3, 'Rahul', 21);
Query OK, 3 rows affected (0.17 sec)
Records: 3  Duplicates: 0  Warnings: 0
```

