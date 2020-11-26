#include<stdio.h>
void swap(int *xp,int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
int main(){
	int n,a[100],t=1;
	while(t){
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
    int odd[100],even[100],k=0,l=0;
    for(int i=0;i<n;i++){
    	if(a[i]%2==0){
    		even[k]=a[i];
    		k++;
		}
		else{
			odd[l]=a[i];
			l++;
		}
	}
	for(int i=0;i<k;i++){
		printf("%d ",even[i]);
	}
	for(int i=0;i<l;i++){
		printf("%d ",odd[i]);
	}
    
	}
}
