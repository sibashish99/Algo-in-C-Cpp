#include<stdio.h>
int productvalue(int num){
	int rem,val=0;
	while(num>0){
		rem=num%10;
		val=val+rem;
		num=num/10;
	}
	return val;
	
}
int main(){
	int n,a[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",productvalue(a[i]));
	}
}
