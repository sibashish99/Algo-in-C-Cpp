#include<stdio.h>
//dormant accounts wipro test
int main(){
    
	int numOfAcc, balances[100],i,count=0;
	
	scanf("%d",&numOfAcc);
	for(i=0;i<numOfAcc;i++){
		scanf("%d",&balances[i]);
	}
	for(i=0;i<numOfAcc;i++){
	   if(balances[i]<=0){
	   	 count++10;
	   }
	}
	printf("%d",count);
	
}
