
# Break & Continue 
    # break :
    #include <stdio.h>

int main (){
    int i;
    for(i=0;i<10;i++){
        printf("hi \n");
        if(i==5){
        printf("hello \n");
            break;
        }
    
    }
    printf("\n finished");
}

    # continue 
        #include <stdio.h>

int main (){
    int i;
    for(i=0;i<10;i++){
        printf("hi \n");
        if(i==5){
            continue;
        }
        printf("hello \n");
    
    }
    printf("\n finished");
}
