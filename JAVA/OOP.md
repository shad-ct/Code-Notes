# calling a class inside the main file : 
    className  something = new className();

# calling a nonStatic inside a static : // we make the objects within the main ;
        public class App {
        int a = 10;

        public static void main(String[] args) throws Exception {
            App sup = new App();
            sup.nonStaticFun();
            System.out.println(sup.a);
        }

        void nonStaticFun() {
            System.out.println("this is a nonstatic funcions ");
            }
        }


# constructor : 
    // calling a class into main , without using any function calling like class1();
    // when you want an action to do when an object is created 
    class1.java : 
                public class class1 {
                    class1() { // note that the class1() function like thing is called constructor of class1.java
                        System.out.println("hello");
                            }
                    }
    main.java : 
                public class Main {
                public static void main(String[] args) throws Exception {
                        class1 s = new class1();
                        }
                    }

# Local and Global variables : 

        class : 
                    public class class1 {
                            int a = 100;
                            int b = 200;
                        class1(int a, int b) {
                        int c = a + b;
                        System.out.println(this.a + "  " + b);
                        }
                    }
        main : 
                    public class App {
                    public static void main(String[] args) throws Exception {
                        class1 c1 = new class1(10, 20);
                        }
                    }
    

# inheritance 
    public class ThisOne extends //inherit thatOne{
         
    }

# polymorphism 

    # method overloading 

    class : 
        void display(){
            blahldjfkdlasjfklasd
        }
        void display(in a ){
            blahlkafjsdk
        }
    
    main : 
        class() h = new class();
        h.display()
        h.display(10)

        both will be called // you see, same name, different function lol 

    # method overrirding 

        class A {
            void display(){

            }
        }
        class B extends A{
            void display(){

            }
        }
        which display() will be called? from the inherit of B , that is A or from B itself ? 
        ans : from B (from base class, not subclass)
        well, if you want it from A , use : 
                super.display() //which displays from subclass 
