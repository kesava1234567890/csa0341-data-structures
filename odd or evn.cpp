#include<stdio.h>
int main(){
	int i,n,m,a[10];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	if(i%2==0){
		printf("the even elementsare:%d",i);
	}else if(i%2!=0){
		printf("the  odd elementsare:%d",i);
	}
	}
	
}
