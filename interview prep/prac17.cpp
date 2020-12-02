//a=0 b=1 c=a+b c=1 a=b b=c

#include<stdio.h>
int main(){
	int a=0,b=1,c,n,i;
	
	printf("Enter the limit:");
	scanf("%d",&n);
	
	printf("The series is:\n");
	printf("0\n1\n");
	
	while(i<n){
		c=a+b;
	    a=b;
		b=c;
		printf("%d\n",c);
		i++;
	}
	
	
}
