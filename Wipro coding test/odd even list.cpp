//even and odd list
#include<stdio.h>
int main(){
    int n,a[10],i,j;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    	scanf("%d",a[i]);
	}
	for(i=0;i<n;i++){
	   if(a[i]%2==0){
	   	 printf("%d ",a[i]);
	   }
	}
	for(i=0;i<n;i++){
	   if(a[i]%2!=0){
	   	 printf("%d ",a[i]);
	   }
	}
	printf("%d\n%d",a[n]+a[n-1],a[n]*a[n-1]);
}

