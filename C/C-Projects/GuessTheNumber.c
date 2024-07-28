#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int myNum,userNum;
	srand(time(NULL));
	myNum = rand()%10;
	printf("guess the number bro : ");
	while(true){
		scanf("%d",&userNum);
		if(userNum == myNum){
			printf("you guess it bro ");
			break;
		}
		else if (userNum > myNum){
			printf("your number is greater than mine \n");
			printf("try again : ");
		}
		else if (userNum < myNum){
			printf("your number is less than mine \n");
			printf("try again : ");
		}
	}
}
