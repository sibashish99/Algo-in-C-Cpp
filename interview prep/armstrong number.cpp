#include<stdio.h>
#include<math.h>
int main(){

	int number,lastDigit,originalNumber,sum=0,power=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

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
		printf("The given number is a Armstrong\n");
	else
		printf("The given number is not a Armstrong \n");

	

}
