# create a project in dart : 
```
dart create helloWorld
```

## Input and Output


    import 'dart:io';
    
    void main(){
      print("hello world");
      var a = stdin.readLineSync();
      print('hello $a');
    }

-----------------------------

## adding 2 num : 


    import 'dart:io';
    
    void main(){
        print("enter 2 numbers : ");
        var num1 = stdin.readLineSync();
        var num2 = stdin.readLineSync();
        
        var sum = int.parse(num1!) + int.parse(num2!);
    
        print("Your sum is : $sum");
    }

The int.parse(!) : is for making sure that the num1 is not null , and we get it as string as default.


-------------------------------

## String : 

    String name = 'shad'
    String yourName = "i am shad"
    string address = 
    '''hello world 
    This is multi line'''

    print(name.length) // find length (including white space)

----------------------------------

## List✅ Array❌

    var Mix = ["shad",19]; // dynamic array , same as list<dynamic>
    List<int> numbers = [1,2,3,5,6,7,8];

### List operations : 

    numberList.contains(5) // check if it has 5 
    numberList.add(22) // add 22 to list 
    numberList.removeAt(3) // remove at index 3 
    
