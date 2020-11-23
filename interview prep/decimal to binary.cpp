#include<stdio.h>
int main(){
	int num;
	
	scanf("%d",&num);
	int rem,bin=0,i=1;
	while(num!=0){
		rem= num %2;
		bin = bin +rem*i;
		num =num/2;
		i=i*10;
	}
	printf("%d",bin);
}
