# Create a DB : 
```
CREATE DATABASE dbName;
```

# Delete a DB : 
```
DROP DATABASE dbName;
```

# Create a table : 
```
USE dbName

CREATE TABLE student(
student_id VARCHAR(10) NOT NULL,
PRIMARY KEY (student_id),
student_name VARCHAR(100) NOT NULL,
age INT NOT NULL,
place VARCHAR(100) NOT NULL,

)
```

# Show DB data : 
```
SELECT * FROM dbName;
```

# Insert data : 
```
INSERT INTO student(student_id, student_name, age, place) VALUE('S1', "SHAD", 20, "THEKUMBAD");
```
