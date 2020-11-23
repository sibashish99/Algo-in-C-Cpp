#include<stdio.h>
#include<math.h>
int main(){
	int num;
	scanf("%d",&num);
	
	int rem,dec=0,i=0;
	while(num!=0){
		rem=num%10;
		dec+=rem*pow(2,i);
		i++;
		num=num/10;
	}
	printf("%d",dec);
}
