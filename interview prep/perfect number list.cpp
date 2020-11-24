#include<stdio.h>
int perfecrNum(int number){
	int i,sum=0,temp;
	temp=number;
	for(i=1; i < number;i++){
	 if(number%i==0){
		sum = sum + i;
	 }
	}
	if(sum == temp)
		return 1;
	else
		return 0;
}
int main(){
	int number1,number2;

	scanf("%d %d",&number1,&number2);
	for(int i=number1;i<=number2;i++){
		if(perfecrNum(i)==1){
			printf("%d ",&i);
		}
	}
	

	

}

