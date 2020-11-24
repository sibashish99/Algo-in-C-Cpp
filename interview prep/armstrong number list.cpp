#include<stdio.h>
#include<math.h>
int armstrong(int number){
	int lastDigit,originalNumber,sum=0,power=0;
	originalNumber = number;
	while(number!=0){
		number = number/10;
		power++;
	}
	number = originalNumber;	
	while(number!=0){
		lastDigit = number % 10;
		sum = sum + pow(lastDigit,power);
		number = number/10;
	}
	if(originalNumber == sum)
		return 1;
	else
		return 0;

}
int main(){

	int number1,number2;

	scanf("%d%d",&number1,&number2);

    for(int i=number1 ;i<=number2;i++){
    	if(armstrong(i)==1){
    		printf("%d ",i);
		}
	}

	

}
