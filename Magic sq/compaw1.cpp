#include<stdio.h>
#define N 3
int compare(int a[][N],int b[][N])
{
		int i,j;
		for(i=0;i<N;i++)
		{
			for(i=0;i<N;i++)
			{
				if(a[i][j]!=b[i][j])
				  return 0;
				else
				  return 1;
			}
			
			  
		}
}
int main()
{

	int a[N][N]={{1,2,3},{1,2,3},{1,2,3}};
	int b[N][N]={{1,2,4},{1,2,3},{1,2,3}};
	
    if(compare(a,b))
       printf("Both are same.");
	else
	   printf("Both are not same.");	
}
