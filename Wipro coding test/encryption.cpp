//(((S^N%10)^M)%1000000007)
#include<stdio.h>
#include<math.h>
//encryption problem wipro test
int main(){
	 unsigned long long int s, n,m,res;
	 scanf("%llu %llu %llu",&s,&n,&m);
	 res= pow(s,n);
	 res=res%10;
	 res= pow(res,m);
	 res= res%1000000007;
	 
	 printf("%llu",res);
	 
}
