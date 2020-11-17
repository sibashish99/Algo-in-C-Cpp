#include<stdio.h>
int main(){
	int n,a[50],i;
	
	scanf("%d",&n);
	
	for( i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d",a[i]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d",a[i]);
		}
	}
}
