#include<stdio.h>
int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int even[10]={0},odd[10]={0},k=0,l=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			even[k]=a[i];
			k++;
		}
		else{
			odd[l]=a[i];
			l++;
		}
	}
	printf("Even\n");
	for(int i=0;i<k;i++){
		printf("%d ",even[i]);
	}
	printf("\nOdd\n");
	for(int i=0;i<l;i++){
		printf("%d ",odd[i]);
	}
}
