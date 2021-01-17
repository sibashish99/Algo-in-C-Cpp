#include<stdio.h>
int fib(int num){
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	else{
		return fib(num-1) + fib(num-2);
	}
}
int main(){
	int n,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",fib(c));
		c++;
	}
}
