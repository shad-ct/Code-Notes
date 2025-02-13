# Basic form 
```
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Learning</title>
</head>

<body>
    <form action="index.php" method="get">
        <label>Username : </label><br>
        <input type="text" id="username" name="username"><br>
        <label>Password : </label><br>
        <input type="password" id="password" name="password"><br>
        <input type="submit" value="login">
    </form>
</body>

</html>


<?php

echo $_GET['username']

//$_GET =  Data is appended to the url
//          NOT SECURE
//          char limit
//  Bookmark is possible w/ values
//  GET requests can be cached
//  Better for a search page

//$_POST =  Data is packaged inside the body of the HT
//          MORE SECURE

//No data limit
//Cannot bookmark

//          requests are not cached
//Better for submitting credentials

?>
```
