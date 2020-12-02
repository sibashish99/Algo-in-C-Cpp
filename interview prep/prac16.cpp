 #include<stdio.h>
 int main(){
 	
 	printf("***Program to find factorial of no***\n");
	
	int n;
	printf("How many cases you want to check:\n");
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){
		int n, fact=1,j;
 	
 	    printf("Enter any no:\n");
 	    scanf("%d",&n);
 	    
 	    for(j=1;j<=n;j++){
 	    	fact=fact*j;
		 }
		 printf("Factorial is %d\n",fact);
	}
 	
 }
