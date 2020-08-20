#include<stdio.h>
int checkPrime(int n){
	int j,temp=1;
	for(j=2;j<=n/2;j++){
		if(n%j==0){
			temp=0;
			break;
		}
	}
	return temp;
}
int main(){
	int m,n,i,flag;
	scanf("%d %d",&m,&n);
	
	for(i=m;i<n;i++){
		flag=checkPrime(i);
		if(flag==1)
		   printf("%d ",i);
	}
}
