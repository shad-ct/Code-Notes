
# Useful : 
    #char* name1 = "shad"; // this converts into : "s" "h" "a" "d" just like char name1[]
    # alternate to printf and scanf
    puts("hello")
    gets(name)

# length of string 

    #include <string.h>
    strlen(name)

# to capital/small 

    strlwr(name) ==> small
    strupr(name) ==> capital 

# patch up 2 string 
    
    char s1, s2;
    strcat(s1,s2);
    printf(s1) // will print both 

# reverse order ; 

    strrev(name)

# to get memory address : 

    int a=10;
    printf("%x",&a)

# pointer variable // used to store memory address 
    int a= 10;
    int *p;
    p = &a;
    printf("%x \n",&a);
    printf("%x",p);

    // to access the data : 
        printf("%d",*p)

# typedef 
	typedef int num // used for defining something like, you can use this "num" instead of int now : ) 

# use EOF in loops (end of file) to get to the end 