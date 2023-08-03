#include<stdio.h>
int main(){
	int first,last,middle,i,search,n,a[10];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",a[i]);
	}
	printf("enter the search element:\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	for(i=0;i<n;i++){
		if(first<=last){
			if(a[middle]<search){
				last=middle+1;
				printf("%d",last);
			}else if(a[middle]>search){
				first=middle-1;
				printf("%d",last);
			}else{
				printf("%d=%d",middle,search);
			}
		}
	}
}
