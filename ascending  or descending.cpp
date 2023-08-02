#include<stdio.h>
int main(){
	int i,a[10],j,x,choice,n;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				x=a[j];
				a[j]=a[i];
				a[i]=x;
			}
		}
	}
	printf("enter the choice");
	scanf("%d",&choice);
	if(choice=='1'){
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
	}else{
			for(i=n-1;n>=0;i--){
				printf("%d",a[i]);
			}
	}
}
