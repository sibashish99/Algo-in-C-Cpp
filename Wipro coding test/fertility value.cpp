#include<stdio.h>
//fertility value wipro test
int main(){
	int numBlocks, fertilityVal[50],i,op=0;
	

		scanf("%d",&numBlocks);
		for(i=1;i<=numBlocks;i++){
			scanf("%d",&fertilityVal[i]);
		}
		
		for(i=1;i<=numBlocks;i++){
		   if(i%2!=0){
		   	 op+=fertilityVal[i];
		   }
		}
		printf("%d",op);
	
	
}
