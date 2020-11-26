#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[100];
	printf("Enter values:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int key;
	printf("Enter key:\n");
	scanf("%d",&key);
	for(int i=0;i<n;i++){
		if(a[i]==key){
			printf("%d is found in %d th index",key,i);
		}
	}
}
