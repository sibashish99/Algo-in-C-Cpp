#include<stdio.h>
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=0,smax=0;
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(a[i]>smax && a[i]<max){
			smax=a[i];
		}
	}
	printf("max is %d smax is %d",max,smax);
}
