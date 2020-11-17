#include<stdio.h>
//kth element in unsortd array
int main(){
    int n,k,a[100],i;
    scanf("%d",&n);
     scanf("%d",&k);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("%d",a[k-1]);
}
