//cosmetic company
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int min=100;
    while(n!=0){
    	int t=n%10;
    	if(t<min){
    		min=t;
		}
		n=n/10;
	}
	printf("%d",min);
}
//alternate
#include<stdio.h>
int main(){
	int pId[50], noOfPro,i;
	scanf("%d",noOfPro);
	for(i=0;i<noOfPro;i++){
		scanf("%d",pId[i]);
	}
	int min=pId[0];
	for(i=0;i<noOfPro;i++){
		if(pId[i]<min){
			min=pId[i];
		}
	}
	printf("%d",min);
}
