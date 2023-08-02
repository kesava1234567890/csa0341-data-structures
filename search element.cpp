#include<stdio.h>
int main(){
	int i,n,m,a[10];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the element to search");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		if(a[i]==m){
			break;
		}
	}
	printf("The %d element isfound at %d position:",m,i+1);
}
