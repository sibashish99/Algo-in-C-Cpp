#include<stdio.h>
#include<math.h>
int main()
{
long int s,n,m,ans;
scanf("%ld %ld %ld",&s,&n, &m);
ans=pow(s,n);
ans=ans%10;
ans=pow(ans,m);
ans=ans%1000000007;
printf("%ld",ans);
return 0;
}


