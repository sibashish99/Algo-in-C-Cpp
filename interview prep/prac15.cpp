#include<stdio.h>
int main(){
	printf("***Program to find sum of all no in a interval***\n");
	
	int n;
	printf("How many cases you want to check:\n");
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){
	    int i, n1,n2, sum=0;
	
	    printf("Enter a range:");
	    scanf("%d%d",&n1,&n2);
	
	    for(i=n1;i<=n2;i++){
		  if(i%2==0){
			sum+=i;
		  }
		printf("Sum of all even nos in between %d and %d is: %d",n1,n2,sum);
	    }
	
    }
}
