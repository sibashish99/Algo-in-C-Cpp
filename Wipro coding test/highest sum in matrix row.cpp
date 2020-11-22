#include<stdio.h>
int main(){
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	int a[100][100],sum[100];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		sum[i]=0;
		for(j=0;j<=n;j++){
			sum[i]=sum[i]+a[i][j];
		}
	}
	for(i=0;i<m;i++){
       printf("%d th row sum is: %d\n",i,sum[i]);
	}
	int max=sum[0];
	for(i=0;i<m;i++){
		if(sum[i]<sum[i+1]){
			max=sum[i+1];
		}
	}
	printf("%d th row is having greatest sum is:%d",i-1,max);
	
	
	
}
