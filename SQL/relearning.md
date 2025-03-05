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

# Insert Multiple Records :  : 
```
INSERT INTO student(student_id,student_name, age, place)

VALUES
('S1', "SHAD", 20, "THEKUMBAD"),
('S1', "SHAD", 20, "THEKUMBAD"),
('S1', "SHAD", 20, "THEKUMBAD"),
('S1', "SHAD", 20, "THEKUMBAD"),
('S1', "SHAD", 20, "THEKUMBAD"),
('S1', "SHAD", 20, "THEKUMBAD");
```

# Update Table : 
```
USE db1;

UPDATE student
SET place = "Kannur:
WHERE student_id = 's1';
```

# Copy Data : 
```
Use Db1 ;
SELECT * FROM student;
CREATE TABLE copy LIKE student;
INSERT copy SELECT * FROM student;
```

# Delete on id : 
```
DELETE FROM student;
WHERE student_id = 's2';
```

# Get only specific data : 
```
SELECT student_id FROM student; // shows only student id


SELECT * FROM students
WHERE place =  "kannur"; // gives you people from kannur
```

# Remove Duplicate and show data : 
```
SELECT DISTINCT place
FROM student;

// shows place without repetition
```

# Show Data in Orders : 
```
SELECT * FROM student
ORDER BY student_name ASC; // from A TO Z , ascenting
```
# Add New Column : 

```
SELECT * FROM student;
ALTER TABLE student
ADD contact INT(10) NOT NULL;
// added a contact column
```

# Change data type : 
```
ALTER TABLE student
MODIFY contact VARCHAR(10) NULL;
```

# Rename column : 
```
ALTER TABLE student
RENAME COLUMN contact TO student_contact;
```

# Delete all data at once : 
```
SELECT * FROM student;
TRUNCATE student;
```

# Show only n number of data : 
```
SELECT * FROM student
LIMIT 1;

// to get random :
ORDER BY rand()
LIMIT 1;
```

# Arithmetic Operators : 
```
SELECT 10 - 2 AS result;
```

# Comparision Operators : 
```
SELECT 10 < 20 AS result;
// 0 (false)

SELECT * FROM student
WHERE age BETWEEN 10 AND 20;
```

# Get name starting form a
```
SELECT * FROM student
WHERE student_name LIKE 'a%';
```
 








