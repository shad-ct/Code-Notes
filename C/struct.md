
# structure (used to package different data types into one , like array but not homogenous)
    #include <stdio.h>

    struct Patient{
            char name[10];
    };

    int main(){
        struct Patient sk; // struct Patient sk[5]; and use for loop 
        scanf("%s",&sk.name);
        printf("%s",sk.name);
    }

    
	struct Student{
		char *name;
		int roll;
		float percentage;
	},student1,student2;
	
	student1.name="shad"
