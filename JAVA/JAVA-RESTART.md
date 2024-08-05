# JAVA-RESTART


// array
    int[] arr = { 1, 2, 3, 4, 5, };
    String[] fruits = {"Apple","Banana"};


# method overloading



    public class Main {
    static int findSum(int a, int b) {
        return a + b;
    }

    static int findSum(int a, int b, int c) {
        return a + b + c;
    }
    // you will have to write diff code for input with 2 int and 3 int , so we use overloading to simplify it 

    static double findSum(double c, double d) {
        return c + d;
    }

    public static void main(String a[]) {
        // method overloading :
        int sum1 = findSum(10, 20);
        System.out.println("Sum of 10 and 20 is : " + sum1);
        int sum2 = findSum(20, 40, 505);
        System.out.println("Sum of 20, 40 and 505 is : " + sum2);
        double sum3 = findSum(10.5, 20.5);
        System.out.println("Sum of 10.5 and 20.5 is : " + sum3);
    }
}


# class : group of same type of objects (eg : electronics)
# object : member of class , tv, smartphone, laptop, pc etc.. we can call its class as electronics 
# attributes : properties of the object (color, model name, price etc )
# methods : functions we can do with the object (to call, take photo , message )


public class SmartPhone {
    /*
     * the SmartPhone here is the class , model,price and manufacture are the attributes 
     */
    String model;
    int price;
    String manufacture;
}
public class Main {
    public static void main(String a[]) {
        SmartPhone SP = new SmartPhone();
        String sp1 = SP.model = "samsung";
        SP.price = 50000;
        SP.manufacture = "google";

        System.out.println(sp1);

    }
}
----------------------------------------------------


# Polymorphism
# method overriding

public class Main {
    public static void main(String a[]) {
        India I1 = new India();
        India I2 = new Delhi();
        India I3 = new Kerala();

        I1.speaking();
        I2.speaking();
        I3.speaking();

    }
}


public class India {
    public void speaking() {
        System.out.println("Hello, I am from India");
    }
}

// we use extends to inherit
// the speaking() is called method
class Delhi extends India {
    // method overriding

    public void speaking() {
        System.out.println("Hello, I can speak Hindi");
    }
}

class Kerala extends India {
    // method overriding
    public void speaking() {
        System.out.println("Hello, I can speak Malayalam");
    }
}
----------------------------------------------------



# jdk : java dev kit , where we code and all
# jre : java runtime env , extra classes/files . part of jvm 
# jvm : java virtual machine , where the code run : 



class calc {
    int i = 10; // this i is the instils which belongs to heap memory , not stack

    public int add(int a, int b) {
        System.out.print("this is from add method : ");
        int c = a + b;
        System.out.print(c);
        return 0;
    }
}

public class mains {
    public static void main(String[] args) {
        calc adding = new calc();
        // when you call new, it simple create an object with 2 section in heap.
        // section 1 contains instills. 2nd : has the methods and all.
        // all local variables (like var in methods)are in stack memory
        int x = 10, y = 20;
        adding.add(x, y);
    }
}


# another way to print loop : 

        int num[] = { 1, 2, 3, 4, 21, 123, 12, 312, 312, 312, };
        for (int n : num) {
            System.out.println(n);
        }

# string constant pool : did you know that java doesnt create new data space for data which are same? they just link it with the memory address in string tho | mutable string : can be changed immutable cannot be . default strings are immutable . use string buffer or string builder to make mutable strings 



public class sup{
    int a = 10;b=20;
    sup(int a, int b){
        this.a = a;
        this.b = b; 
        // the a and b in bracket is global variable and the other one is local , to store the global to local we use this. thing 
        // default, it prints the local var 
        SOP(a + " "+ b); 
    }
}

# inheritance : 
    -- single : when only 1 class under
    -- multilevel : when more than 1 class under linear
    -- hirarchial : when more than 1 class under branched or root like 

    class A {
        .................
    }
    class B extends A{
        u can access stuff from A now  
    }

# abstraction 
 abstract class Hello{
    abstract void onText(String text); // no need {} in abstract 
 }

 public class TextScanner {
    Hello obj;
    public TextScanner(Hello obj){
        this.obj = obj;
    }
    void scan(){
        obj.onText("Hello, World!");
    }
 }

 public class Sample extends Hello{
    void onText(String text){

    }
    psvm{
        TextScanner t = new textscanner();
        t.scan();
    }
 }