# intro : 
    student management : 
        entity --> student (ER model , (entity relationship) that is , student has properties, like )
    structure : properties (name, roll no. etc)| data : (shad, 9 etc) 
    STRUCTURED QUERY LANGUAGE  
    DDT - Data definition  lang 
    DML - data manipulation lang 

# creating table : 
    delete is used for deleting a data/value
    drop is used to delete a database 


        CREATE TABLE students(id int primary key, student_name varchar(50) not null , guardian varchar(50) not null, email varchar(50))
        \\ we use not null to specify that this data should be entered
        \\ primary key is used to specify that this is the unique id of the table and it cannot be repeated 
        \\ varchar is used to specify that the data is a string
        \\ int is used to specify that the data is an integer

# editing table 
    ALTER TABLE students add phone_number varchar(10);
    ALTER TABLE students MODIFY phone_number varchar(15);
    alter table students drop column phone_number;
    alter table students rename column phone_number to phone;

# inserting data 
    insert into students values(null,"shad","9895310229"); // we have already declared id, name , phone in order 
    u can also add a comma and values like this : 
                        insert into students values(null,"shad","9895310229"),(null,"jaseel","0934-15123");

    insert into students(phone,name) values("9869696959","raz")

# fetching data 
    select id,student_name, phone from students; // gets all the data mentioned.
    select * from students; //to get all data 
    # more 
        limit
            select * from students limit 0,2; // gets 3 data , 0 to 2.
        distinct 
            select distinct student_name from students //removes duplicate records 
        count 
            select count(student_name) from students; //gets how many data is in it;

    # where clause 
        select * from teachers where id=1; // gets record of id 1 ;
        select * from teachers where id=1 and name="shad"; // gets record of id 1 and specified name 
        select * from teachers where id between 1 and 4;
        select * from teachers where id not between 1 and 4;
        select * from teachers where id not in (1,2,3,4,5);

# Like , used to check pattern matching , more like searching 
    select * from teachers where teacher_name like "a%" //display tr name starting with a;
    select * from teachers where teacher_name like "%a" //display tr name ending with a;
    select * from teachers where teacher_name like "%a%" //display tr name containing a;
    select * from teachers where phone like "___" //gives phone no. with 3 chars
    select * from teachers where phone like "12___" //gives phone no. with 3 chars starting with 12
    select * from teachers where phone like "12__%" //gives phone no. with any chars

# in, used to check if theres this value in it
    select * from teachers where teacher_name in ("shad","jaseel","james") // if these 3 names are in it , then it prints

# multiple conditions 
    select * from teachers where teacher_name = "shad" and phone = "12838" . /// you can use or instead of and 
    select * from teachers where teacher_name = "shad" or phone = "12838"

# sub query 
    select id from teachers where teacher_name = "shad" // here we get the id = 5 
    select * from teachers where id = (select id from teachers where teacher_name = "shad") // here we get the same thing inside the bracket which is 5


# aggregate functions
    select count(id) from teachers; // gives the count of id
    select count(*) from teachers; // gives the count of all the data
    select count(id) from teachers where teacher_name = "shad"
    select max(id) from teachers // to get the max id 
    select min(marks) from students // to get the sum of marks

# group by :
    select student_id, sum(mark) from "marks" group by student_id
    select student_id, sum(mark) from "marks" group by student_id having student_id =1 ; for student of id 1

# joins : 
    one to one : student -> address 
    one to many : student -> marks
    many to many : student -> subjects
    
    inner join : intersection of 2 tables. 
    left join : left + intersection , that is complete of left table 
    right join : right + intersection , that is complete of right table
    cross join : all the data of both tables

    inner join : 
        select * from students join marks on  students.id = marks.student_id
        