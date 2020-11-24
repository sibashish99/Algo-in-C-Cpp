#include<stdio.h>
int main(){
	int num,rem,count=0,sum=0;
	
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum = sum + rem;
		count++;
		num/=10;
	}
	printf("%d nos of digit and sum is: %d",count,sum);
}
