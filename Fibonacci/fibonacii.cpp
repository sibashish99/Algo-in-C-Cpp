#include<stdio.h>
int fib(int num){
	if(num==0 ){
		return 0;
	}
	if(num==1){
		return 1;
	}
	else
	  return fib(num-1)+fib(num-2);
}
int main(){
	int n;
	scanf("%d",&n);
	int i,c=0;
	for(i=1;i<=n;i++){
		printf("%d ",fib(c));
		c++;
	}
}
