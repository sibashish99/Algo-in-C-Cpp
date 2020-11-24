#include<stdio.h>
int fact(int a){
	int fact=1;
	for(int i=2;i<=a;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int num,rem,sum=0;
	
	scanf("%d",&num);

    for(int i=1;i<=num;i++){
    	sum=0;
        int temp1=i;
        int temp2=i;
	    while(temp1>0){
		  rem=temp1%10;
		  sum+=fact(rem);
		  temp1/=10;
	    } 
	   if(sum=temp2){
	    	printf("%d ",temp2);
	   }
	}
	
	
}
