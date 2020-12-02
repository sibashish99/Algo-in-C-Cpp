#include<stdio.h>
int main()
{
    int i,j,n,k,p=0,q=0,r=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((i&j) < k && p < (i&j))
            {
                p=i&j;
            }
            if((i|j) < k && q < (i|j))
            {
                q=i|j;
            }
            if((i^j) < k && r < (i^j))
            {
                r=i^j;
            }    
        }
            
    }
    printf("%d\n%d\n%d",p,q,r);
    
}

