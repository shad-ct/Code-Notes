# Day 01 : 
```
void main() {
  
  // variables : 
  double aa = 5.1;
  String name = "shad";
  List a = [1,2,true,"hi"];
  Set b = {1,2,3,4,5};
  Map cc = {'aaa' : 1}; // we access using its key value.
  dynamic xy = "had"; // can store any type of data values , it can slow down tho.
  // aa = "sad"; will show an error cuz we have already said that its a double type, not a string lol 
  var a5 = 10;
  
  // functions : 
  arr() {
    print('hello world');
  }
  
  arr();
  
  
  hi(String name , int age){
    return "Hello ${name} and you are $age";

    // return "Hello" + name + "and you are " + age.toString();
  }
  var data = hi("shad",19);
  print(data);


// Conditional : 

  var a = 5;
  
  if(a == 5){
    print(a);
  }
  else if(a > 5){
    print('poda potta');
  }
  else{
    print('hehe');
  }

var a =4;
  switch(a){
    case 1 : {
      print('case 1 lol');
    }break;
    case 5: {
      print('case 5');
    }break;
      default : {
        print('nothing');
      }
  }



// Loops :

for(int i =0 ; i<10; i++){
  print('hello');
}



}
```
