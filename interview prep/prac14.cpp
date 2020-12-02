#include<stdio.h>
int main(){
	
	printf("***Program to check palindrome no***\n");
	
	int n;
	printf("How many cases you want to check:\n");
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){
	    int n,rev=0,rem,temp;
	
	    printf("Enter any no:\n");
	    scanf("%d",&n);
	
	    temp=n;
	    while(n>0){
		  rem=n%10;
	 	  rev=rev*10+rem;
		  n=n/10;
	    }
	    if(rev==temp){
	    	printf("%d is palimdrome no.\n",temp);
		}
		else{
			printf("%d is not palindrome no.\n",temp);
		}
	}
	printf("*****************************The end*********************************\n");
	
	
}
