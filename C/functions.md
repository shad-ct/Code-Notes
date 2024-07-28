
# functions without argument and  without return value 
    #include <stdio.h>
    void sum();
    int main(){
    	sum();
	    printf("hello");
    }
	
    void sum(){
	    int num1,num2,sum;
	    printf("enter 2 numbers");
	    scanf("%d%d",&num1,&num2);
	    sum = num1+num2;
	    printf("%d is the sum ",sum);
    }

# function with argument and without return value 

#include <stdio.h>
    void sum(int , int);
    int main(){
    	int a,b;
    	printf("enter 2 numbers");
    	scanf("%d%d",&a,&b);
    	sum(a,b);
    }
	
    void sum(int num1,int num2){
	    int sum = num1+num2;
    	printf("%d",sum);
    }

# function with argument and with return value 

#include <stdio.h>
    int sum(int , int);

    int main(){
	    int a,b,res;
	    printf("enter 2 numbers");
	    scanf("%d%d",&a,&b);
	    res = sum(a,b);
	    printf("%d",res);
	    return 0;
    }
	
int sum(int num1,int num2){
	int result = num1+num2;
	return result;
}


# function without argument and with return value 

#include <stdio.h>
int sum();

int main(){
	int k = sum();
	printf("%d",k);
}
	
int sum(){
	int a , b,c;
	printf("enter 2 num");
	scanf("%d%d",&a,&b);
	c = a + b;
	return c;
}

