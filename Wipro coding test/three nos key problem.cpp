#include<stdio.h>
int argeDigit(int a){
	int m=0,rem;
	while(a>0){
		rem=a%10;
		if(rem>m){
			m=rem;
		}
		a=a/10;
		
	}
	return m;
}
int sLargeDigit(int a){
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
	return sm;
}
int main(){
	int a1,a2,a3;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	int k1,k2;
	k1=argeDigit(a1) + argeDigit(a2) +argeDigit(a3);
	k2=sLargeDigit(a1)+sLargeDigit(a2)+sLargeDigit(a3);
	printf("%d",(k1-k2));
	
	
}
