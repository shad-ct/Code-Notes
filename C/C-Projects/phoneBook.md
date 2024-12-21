```
#include <stdio.h>

    struct phoneBook{
    int number[10];
    char name[50],note[10000];
    };
    


int main(){
    printf("welcome to the phone book ! \n\n");

    struct phoneBook sd;
    printf("Name : ");
    scanf("%s",sd.name);
    printf("Phone number : ");
    scanf("%d",sd.number);
    printf("Note (Relation, DOB, Address etc...) : ");
    scanf("%s",sd.note);

    FILE *pBook;
    pBook = fopen("PhoneNumbers.txt","a");
    fprintf(pBook, "Name: %s\n", sd.name);
    fprintf(pBook,"Phone Number : %d\n\n",sd.number);
    fprintf(pBook, "Note: %s\n\n", sd.note);

    fclose(pBook);

}

```
