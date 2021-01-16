#include<stdio.h>
int maxF(int a[i],int n){
   int max=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			 max=a[i];
		}
		
	}
    return max;
}
int secMax(int a[i],int n,int m){
    int smax=0,;
	for(int i=0;i<n;i++){
		if(a[i]<m && a[i]>smax){
                    smax=a[i];
		}
		
	}
    return smax;
}
int main(){
	int n,a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m=maxF(a,n)
	printf("max is :%d",m);
	printf("Second max is :%d",secMax(a,n,m));
	int max=0,smax=0;
	
}
