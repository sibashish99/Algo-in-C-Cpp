#include<stdio.h>
int fact(int a){
	int fact=1;
	for(int i=2;i<=a;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int num,rem,sum=0;
	
	scanf("%d",&num);
	int temp=num;
	while(num!=0){
		rem=num%10;
		sum+=fact(rem);
		num/=10;
	}
	(sum==temp)?printf("%d is strong.",temp):printf("%d is not strong",temp);
	
	
}
