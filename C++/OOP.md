# Class & Object : 
<details>
  <summary> Class & Object :  </summary>
  
🧱 Class: The Blueprint
A class is a blueprint or template for creating objects. It defines the properties (attributes) and behaviors (methods) that the objects created from it will have.

🐶 Object: The Instance
An object is an actual instance of a class. It’s a concrete entity that has real values for the attributes defined in the class and can perform the behaviors.

```
#include <iostream>
using namespace std;

class Mobile{
  public:
    int id;
    string name;
    void showDetails(){
      cout<<"ID : " << id << endl;
      cout<<"Name : " << name <<endl; 
    }
};

int main() {
    Mobile mob1;w
    mob1.id = 1;
    mob1.name = "kello";
    
    cout << mob1.showDetails();
}
```

attribute : make, model-name, price
methods : call , disconnect, pic 

</details>

# Inheritanc

<details>
  <summary> Inheritance </summary>
  
Once class acquires the properties of another class.
Advantages : 
- code reusability
- increase readibilty
- easy modification 
child class inherte the properties of the parent class.

<details>
  <summary>Code</summary>
  

```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class electronics{
    public:
          int id;
          string name;
          int price;
          
          void showDetails(){
              cout<<"ID :"<<id<<endl;
              cout<<"Product Name : "<<name<<endl;
              cout<<"Price : "<<price<<endl;
          }
};

class TV : public electronics{
    public:
    void watch(){
        cout<<"this function is only in TV, watching tv"<<endl;
    }
};

class Laptop: public electronics{
    public:
    void game(){
        cout<<"this function is only in laptop, gaming lap!"<<endl;
    }
    
};

int main() {
    
    TV TV1;
    Laptop LT1;
    
    TV1.id = 1;
    TV1.name = "LG tv here";
    TV1.price = 1000;
    TV1.showDetails();
    TV1.watch();
    
    cout<<"\n\n\n\n------------------------\n\n\n"<<endl;
    
    LT1.id = 1;
    LT1.name = "LOQ";
    LT1.price = 60000;
    LT1.showDetails();
    LT1.game();
    
}
```
</details>
<details>
    <summary>01 Single Inheritance</summary>
    
  - when a single class is derived from one base class. 
  - most simplest.
<img width="343" height="204" alt="image" src="https://github.com/user-attachments/assets/525d7ea8-4701-44c7-9e93-cdb2098eb345" />
</details>

<details>
    <summary>02 Multiple Inheritance</summary>
  
  - single derived class may inherit from 2 or more base classes
  - derived class with several base class 
  <img width="593" height="287" alt="image" src="https://github.com/user-attachments/assets/2bebaf44-4e56-4dcf-b6f2-7e1e797ebff9" />

```
class statement:public student, public sport{

}
```

</details>

<details>
    <summary>03 Hierarchical Inheritance</summary>
- several classes are derived form common base class
<img width="538" height="222" alt="image" src="https://github.com/user-attachments/assets/05f5b47f-3606-4340-bcce-440d234deb74" />

    
</details>

<details>
    <summary>04 Multilevel Inheritance</summary>
    Foldable Content[enter image description here][1]
</details>

<details>
    <summary>05 hybrid/virtual Inheritance</summary>
    Foldable Content[enter image description here][1]
</details>

</details>

# Encapsulation
<details>
  <summary> Encapsulation : </summary>

  
binding of data(attributes & methods) in a class in to a single unit. 
### To achiece : 
1. declare var as private
2. view of modify var vals via publics getter (read only) and setter (write only) methods

### Advantages : 
1. increase data security 
2. increase readability and flexibility 
3. reusability 


<details>
  <summary>Code </summary>
  

```

#include <iostream>
using namespace std;

class bankACC{
private:
    int acBalance;

public:
    //getter and setter : 
    
    void setBalance(int b){
        acBalance = b;
    }
    
    int getBalance(){
        return acBalance;
    }
};

int main()
{
    bankACC ac1;
    ac1.setBalance(10000);
    cout << ac1.getBalance();
}
```
</details>
</details>

# Abstraction
<details>
  <summary>Abstraction</summary>
  
- hiding the implementation details form the user 
- only the functionality will be provided to the user

 ### Advantages : 
 1. security 
 2. simplicity 


<details>
  <summary>Code</summary>
  
```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class GoogleSearch{
private:
  string searchText;
  string searchResult;
  
  void searchProcess(){
      searchResult = "results about : " + searchText;
      cout << searchResult <<endl;
  }
public : 
    void search(string text){
        searchText = text;
        searchProcess();
    }
};

int main() {
    GoogleSearch search1;
    search1.search("hello");
}
```
</details>


</details>


# Constructor : 
<details>
  <summary>Constructor</summary>
  role is to initilize objects. 
  when an object is created, constructor is called automatically..
  constructor should be public and also no return value 

  
<details>
  <summary>Code</summary>
  
```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Electronics {
 public : 
 string item ;
 string brand;
 
 Electronics(){
     cout << "constructor callled";
 }
};


int main() {
    Electronics e1;
}
```

</details>


### Prametrized constructor : 
<details>
  <summary>Prametrized constructor </summary>

  
```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Electronics {
 public : 
 string item ;
 string brand;
 
 Electronics(string i, string b){
     item = i;
     brand = b;
     cout << "constructor callled";
 }
 void print(){
     cout << " Item : " << item << "Brand : " << brand << endl;
 }
};


int main() {
    Electronics e1("TV", "Sony");
    
    e1.print(); 
}
```

```
// Oanother eg of parametrized 
#include <iostream>
using namespace std;

class student{
 public :
  int age;
  string name;
  
  student(string name){
      cout<< "Hello " << name <<endl;
  }
};

int main() {
    student st1("shad"),st2("adel");
}
```
</details>

</details>



# Polymorphism : 
<details>
  <summary>Polymorphism</summary>

  
perform single action in different ways
if you know all lang in india, you'll speak based on the place you are in . the main thing you doing is speaking

achieve polymorphism in following ways : 
1. function overrriding 
2. function overloading
3. operation overloading . 
advantage : code resuability 


### Function Overriding : 
<details>
  <summary>Function Overriding</summary>

  
rewriting the function in parent class, and making it to something else in child class.
we just overridden the function in the parent class, rewrote it in the child class. 


<details>
  <summary>CODE</summary>

  
```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class India{
public : 
    void speak(){
        cout << "i can speak indian lang";
    }
};

    class Delhi : public India{
        public :  
    void speak(){
        cout << "i can speak Hindi lang";
    }
    };
    
    class Kerala : public India{
        public : 
        void speak(){
        cout << "i can speak Malayalam lang";
    }
    };
    


int main() {
    India i1;
    Kerala k1;
    Delhi d1;
    
    i1.speak();
    k1.speak();
    d1.speak();
}

```

</details>
</details>


### Function overloading : 
<details>
  <summary>Function overloading </summary>

  
same function name but with different parameter data type, different operations or function.


<details>
  <summary>C O D E</summary>
  
  ```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class findSum{
public:
    void sum(int a, int b ){
        cout << a + b <<endl;
    }
    void sum(int a, int b, int c){
        cout << a + b+c;
    }
};



int main() {
    findSum s1,s2;
    s1.sum(10,20);
    s2.sum(2,2,3);
}
```

</details>


</details>


### Operator overloading : 
<details>
  <summary>Operator overloading </summary>
  
provide special meanign of an operator for a user-defined data type (objects & structure)
cannot use for built-in types (float, char, int etc.)


<details>
  <summary>C O D E</summary>
  
```
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Object{
    
  private:
    int a;
    
    
  public : 
  
  void operator ++(){
      a = a + 5;
  }
  
  
  Object(){
    a = 5;
  }  
  void print(){
      cout << a<< endl;
  }
};



int main() {
    Object obj1;
    ++obj1;
    obj1.print();
}
```
</details>

</details>



</details>

