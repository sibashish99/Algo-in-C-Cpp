#include<stdio.h>
int main(){
	int n,a[100],t=1;
	while(t){
		scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int csum=0,max=0;
	for(int i=0;i<n;i++){
		csum=csum+a[i];
		if(csum>max){
			max=csum;
		}
		if(csum<0){
			csum=0;
		}
		
	}
	printf("%d",max);
	}
	
}
