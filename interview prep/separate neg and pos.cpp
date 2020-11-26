#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int neg[100],pos[100],k=0,l=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			neg[k]=a[i];
			k++;
		}
		else{
			pos[l]=a[i];
			l++;
		}
	}
	for(int i=0;i<k;i++){
		printf("%d ",neg[i]);
	}
	for(int i=0;i<l;i++){
		printf("%d ",pos[i]);
	}
}
