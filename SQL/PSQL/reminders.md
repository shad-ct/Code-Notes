# to edit a table name : 
```
alter table [current name] rename to [new name];
```
# Add a new column to already existing table : 
```
Alter table authors add column author_id SERIAL PRIMARY KEY int;
```

# Foreign key : 
create the column first, that refer to the foreign key. (author_id int)
```
foriegn key (author_id) references authors(author_id)
```
here, the first id is created in the books table and it is refering the initial id from the authors table.

# order of dates : 
```
'year - month - day'
```

# Join author in books with actual author name : 

```
SELECT
    books.title,
    authors.name  -- Corrected from 'author.name' to 'authors.name'
FROM
    books
JOIN
    authors ON
    books.author_id = authors.author_id;
```
this shows the title of the book and the author name.
