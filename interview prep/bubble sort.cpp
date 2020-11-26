#include<stdio.h>
void swap(int *xp,int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
	 for(int j=0;j<n-i-1;j++){
	   if(a[j]>a[j+1]){
			swap(&a[j],&a[j+1]);
		}	
	 }
		
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
