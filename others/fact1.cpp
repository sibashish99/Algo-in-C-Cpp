#include<stdio.h>
int main(){
	int i,n,fact=1;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		fact = fact*i;
	}
	printf("%d ",fact);
}
