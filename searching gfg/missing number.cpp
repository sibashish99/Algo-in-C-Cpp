#include<stdio.h>
int missingNumber(int a[],int n){
	int total=(n+1)*(n+2)/2;
	for(int i=0;i<n;i++){
		total-=a[i];
	}
	return total;
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int miss=missingNumber(a,n);
	printf("%d",miss);
}
