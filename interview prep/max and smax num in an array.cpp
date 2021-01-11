#include<stdio.h>
int main(){
	int n,a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int max=0,smax=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			 max=a[i];
		}
		if(a[i]>smax && a[i]<max){
			smax=a[i];
		}
	}
	printf("Max is :%d\n Smax is %d",max,smax);
}
