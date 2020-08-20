#include<stdio.h>
int main(){
	long long n,rev=0,rem;
	scanf("%lld",&n);
	while(n!=0){ // n=0
		rem=n%10; //121%10 => 1 //12%10 => 2 //1%10 => 1
		rev=rev*10+rem; //0*10 +1 //1*10 +2 => 12 //12*10 + 1=>121(print)
		n/=10; //121/10=>12 //12/10 =>1 // 1/10=> 0
	}
	printf("%lld",rev);
}
