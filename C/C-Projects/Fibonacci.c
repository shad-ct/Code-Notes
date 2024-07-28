#include <stdio.h>

int main(){
	int n,n1=0,n2=1,temp,i;
	printf("enter the limit : ");
	scanf("%d ",&n);
	printf("%d %d",n1,n2);
	for(i=2;i<n;i++){
		temp = n1+n2;
		printf("%d ",temp);
		n1=n2;
		n2 = temp;
		
	}
}
