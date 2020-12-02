#include<stdio.h>
int main(){
	
    	printf("***Program to find prime no in a range***\n");
	
        int num1,num2;
	    int prime=1;
	    printf("Enter the range that you want to check:");
	    scanf("%d%d",&num1,&num2);
		
		printf("Prime nos in between %d and %d is:\n",num1,num2);
		for(int j=num1;j<=num2;j++)
		{
			for(int i=2;i<=j/2;j++)
			{
			    if(j%i!=0)
				{
				  prime=1;
			    }
			    if(prime==1){
			    	printf("%d\n",j);
				}
		    }
	    }
		
}
		   
	    
	
	
	
	


