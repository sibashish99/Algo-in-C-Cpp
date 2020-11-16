//cosmetic company
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
    	int t=n%10;
    	if(t%2==0){
    		sum+=t;
		}
		n=n/10;
	}
	printf("%d",sum);
}

