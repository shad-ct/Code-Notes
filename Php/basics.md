# print
    echo"hello world";
    echo "my name is $name ";
    echo var_dump($age); # to get value and type 
# comment : 
    // 
    #
    /*
    */
# Data types : 
    $name = "shad";
    $age = 18;
    echo $name;

    define("PI", 3.14); # const
    echo PI;
# get and post methods 

    // post is better than get, get will show the data

    <form action="index.php" method = "POST">
        <label for= "name" >Enter your name please : </label><br>
        <input type="text" name = "name" id = "nameI"><br>
        <input type= "submit">
    </form>

    <?php
        $name = $_POST["name"];
        echo "your name is $name";
        echo "thank you for filling";
    ?>


# summing 2 num : 
   <form action="index.php" method = "POST">
        <label for="num1">Enter number 1</label><br>
        <input type="number" name="num1" id = "num1"><br>
        <label for="num2">Enter number 2</label><br>
        <input type="number" name="num2" id = "num2"><br>
        <input type="submit" value="Submit">

   </form>

     <?php
        $num1 = $_POST["num1"];
        $num2 = $_POST["num2"];
        $result = $num1 + $num2;
        echo "The sum of $num1 and $num2 is $result";
    ?>

# array : 
    $fruits = array("banananana", "grape", "apple");
     echo $fruits[1]
     echo count($fruits); # get number of elements 
 # associative array : 
    $country = array("IN" => "India","Sl" => "Sri Lanka"); # we are assigning key values 
    echo $country["IN"];
# for each : 
    foreach($country as $c => $c_values){
        echo $c;
    }

# functions : 
    function printing($name){
        echo "hello $name";
    }
    printing("shad");

# some functions : 
    strtolower($yourString) # to lowercase , u can use strtoupper 
    # upper case first : ucfirst($string)
    # upper case all : strtoupper($string)
    # reverse : strrev()
    # to binary : decbin($num);
    # to decimal : bindec($num);
    # random : rand();

# include and require : 
    // if u use include , errors will only be shown from the file of error, others will run properly. not in require;
    // footer.php : 
        <?php
        echo "<P> This is php footer lol</P>";
    // header.html : 
        <div style="background-color: yellow;">
            <h1>hello</h1>
        </div>
    // index.php (main file)    
        <body>
            <?php include "header.html" ?>
            <h2>This is from main php file </h2>
            <?php include "footer.php"?>
        </body>

# OOP :     
    class students{
        public $name;
        public $age;
        function show_details(){
            echo "Name: $this->name";
            echo "<br>";
            echo "Age: $this->age";
        }
    }

    $std1 = new students();
    $std1->name = "John";
    $std1->age = 20;
    $std1->show_details();

    // constructor : 
        <?php 
    
    class students{
        public $name;
        public $age;    
        public function __construct($name, $age) {
            $this->name = $name; 
            $this->age = $age;
        }
        public function display(){
            echo "Name : ".$this->name;
            echo "<br>";
            echo "Age : ".$this->age;
        }
    }

    $std1 = new students("shad","18");
    $std1->display();
    
    ?>

# php with mySQL : 
    // create a database in phpMyAdmin , name those Name 

        <?php
        $host = "localhost";
        $user = "root";
        $pass = "";
        $database = "db1";

    $connectLOL  = mysqli_connect($host,$user,$pass,$database);
    if($connectLOL){
        echo "Connected Muahahah";
    }
    else{
        die("Not connected : ( ");
    }
    $mail = "hello@gmail.com";
    $sql = "INSERT INTO data (Name, Age, Mail) VALUES ('shad', 18, 'shad@gmail.com')";
    // "data" table name from myAdmin
    

    mysqli_query($connectLOL,$sql);
    mysqli_close($connectLOL);
    ?>
    
