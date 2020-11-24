#include<stdio.h>
int main(){
	int number,lastDigit,originalNumber,reverseNumber=0;

	scanf("%d",&number);

	originalNumber = number;

	while(number!=0){
		lastDigit = number % 10;
		reverseNumber = reverseNumber*10 + lastDigit;
		number = number/10;
	}
	
	if(originalNumber == reverseNumber)
		printf("The given number is a Palindrome\n");
	else
		printf("The given number is not a Palindrome \n");

	

}
