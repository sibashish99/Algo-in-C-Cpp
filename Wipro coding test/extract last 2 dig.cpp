#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int dig=n%100;
	if(dig>9)
	   printf("%d",dig);
	else{
		if(dig==0){
			printf("00");
		}
		else{
			printf("0%d",dig);
		}
	}
}
