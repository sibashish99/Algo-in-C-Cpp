#include<stdio.h>
//int fib(int c){
//	if(c==0)
//	  return 0;
//	if(c==1)
//	  return 1;
//	else
//	  return (fib(c-1) + fib(c-2));
//}
//int main(){
//	int n,i,c=0;
//	
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("%d ",fib(c));
//		c++;
//	}
//}
int main(){
	int n,a=0,b=1,c;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}

