#include<stdio.h>
int main(){
	int fact,i,n;
	fact=1;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("factorial of %d number is %d",n,fact);
}
