//identical matrix
#include<stdio.h>
int main(){
	int m,n,a[50][50],b[50][50],flag=1;
	
	scanf("%d%d",&m,&n);
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				flag=0;
			}
			else{
				flag=1;
			}
		}
	}
	if(flag==1){
		printf("\nBoth are same");
	}
	else{
		printf("-1");
	}
	
}
