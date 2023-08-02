#include<stdio.h>
int main(){
	int i,a[10],k,j,n,dup[10];
	printf("enter thesize ofthe array ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]==a[j]){
				dup[k]=a[i];
				k++;
			}
		}
	
	}
	for(i=0;i<n;i++){
		printf("the duplicatevaluesa are%d",dup[i]);
	}
}
