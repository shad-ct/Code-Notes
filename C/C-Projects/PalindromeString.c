#include <stdio.h>
#include <string.h>
int main(){
	char str[]="welcome";
	strrev(str);
	printf("%s",str);
}


checking if input are pal 

#include <stdio.h>
#include <string.h>
int main(){
	char str[]="malayalam";
	char temp[30];
	strcpy(temp,str);
	strrev(str);
	if(strcmp(temp,str)==0){//comparing
		printf("string is pal");
	}
	else{
		printf("string is not pal");
	}
}


# with our logic : 

#include <stdio.h>

int main(){
	char str[]="eng";
	int i, j, length=0, flag=1;
	while(str[length]!='\0'){
		length++;
	}
	j = length - 1; // Initialize j outside the loop
	for(i=0; i<j ; i++, j--){
		if(str[i] != str[j]){
			flag = 0;
			break;
		}
	}
	
	if(flag ==1){
		printf("yes its pal\n");
	}
	else{
		printf("not pal\n");
	}
	
	return 0;
}
	
  
