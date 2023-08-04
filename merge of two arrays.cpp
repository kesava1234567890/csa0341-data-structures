#include<stdio.h>
int main(){
	int i,m,n,k,a[10],b[10],merge[20];
	printf("entr the size of array1:\n");
	scanf("%d",&n);
	printf("enter the size of array2:\n");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		merge[i]=a[i];
	}
	k=i;
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
		merge[k]=b[i];
		k++;
	}
	for(i=0;i<m+n;i++){
		printf("%d",merge[i]);
	}
	return 0;
}
