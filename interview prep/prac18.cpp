#include<stdio.h>
int main(){
	
    	printf("***Program to find prime no***\n");
	
        int num;
	    int prime=0;
	    printf("Enter the no that you want to check:");
	    scanf("%d",&num);
		
		for(int j=2;j<=num/2;j++){
			if(num%j==0){
				prime=1;
			}
	    }
		    if(prime==0){
			  printf("%d is prime no.\n",num);
		    }
		    else{
			printf("%d is not prime no\n",num);
		    }
	    
	
	
	
	

}
