#include <stdio.h>
int main(){
	int num = 1234;
	int rev = 0,rem;
	while(num!=0){
		rev = rev *10;
		rem = num %10;
		rev = rev + rem;
		num = num/10;
	}
	printf("%d",rev);
}
