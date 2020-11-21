#include<stdio.h>
void largeDigit(int a){
	int m=0,rem;
	while(a>0){
		rem=a%10;
		if(rem>m){
			m=rem;
		}
		a=a/10;
		
	}
	printf("%d\n",m);
}
void sLargeDigit(int a){
	int m=0,sm=0,rem;
	while(a>0){
		rem=a%10;
		if(rem>m){
			m=rem;
		}
		if(rem>sm && rem<m){
			sm=rem;
		}
		a=a/10;
	}
	printf("%d",sm);
}
int main(){
	int n;
	scanf("%d",&n);
	largeDigit(n);
	sLargeDigit(n);
}
