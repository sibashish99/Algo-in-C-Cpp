#include<stdio.h>
int missingNo(int a[],int n){
	int total=(n+1)*(n+2)/2;
	for(int i=0;i<n;i++){
		total-=a[i];
	}
	return total;
}
int main(){
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Missing no is: %d",missingNo(a,n));
}
//The approach remains the same but there can be overflow if n is large. In order to avoid integer overflow,
// pick one number from known numbers and subtract one number from given numbers. This way there won’t have Integer Overflow ever.
