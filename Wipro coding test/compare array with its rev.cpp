#include<stdio.h>
int main(){
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[100];
	for(i=0;i<n;i++){
	    b[i]=a[i];
	}
//	for(i=0;i<n;i++){
//	    printf("%d ",b[i]);
//	}
	int temp,start=0,end=n-1;
	for(i=start;i<end;i++){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
//	printf("\n");
//	for(i=0;i<n;i++){
//	    printf("%d ",a[i]);
//	}
    int count=0;
     for(i=0;i<n;i++){
	    if(a[i]==b[i]){
	    	count++;
		}
	}
	printf("%d",count);
	
}
