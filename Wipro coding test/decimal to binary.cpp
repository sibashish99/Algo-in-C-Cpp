#include<stdio.h>
int main(){
	int n,rem,temp=1,bin=0;
	scanf("%d",&n);
	while(n!=0){
		rem=n%2;
		bin=bin+(rem*temp);
		n=n/2;
		temp=temp*10;
	}
	printf("%d",bin);
}
