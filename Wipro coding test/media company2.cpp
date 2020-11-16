//cosmetic company 2
#include<stdio.h>
int main(){
    int n,min=1;
    scanf("%d",&n);
    while(n!=0){
    	int t=n%10;
        min=min*t;
		n=n/10;
	}
	printf("%d",min);
}

