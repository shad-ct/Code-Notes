# Class & Object : 
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
    Mobile mob1;
    mob1.id = 1;
    mob1.name = "kello";
    
    cout << mob1.showDetails();
}
```

# Inheritance 

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

# Encapsulation : 
binding of data(attributes & methods) in a class in to a single unit. 
### To achiece : 
1. declare var as private
2. view of modify var vals via publics getter (read only) and setter (write only) methods

### Advantages : 
1. increase data security 
2. increase readability and flexibility 
3. reusability 

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
