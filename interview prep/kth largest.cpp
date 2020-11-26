#include<stdio.h>
void swap(int *xp,int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
int main(){
	int n;
	printf("how many:\n");
	scanf("%d",&n);
	int a[100];
	int k;
	printf("Enter:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter k:\n");
	scanf("%d",&k);
	for(int i=0;i<n;i++){
	 for(int j=0;j<n-i-1;j++){
	   if(a[j]<a[j+1]){
			swap(&a[j],&a[j+1]);
		}	
	 }	
  }
  for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
  printf("\nValue : %d",a[k-1]);
}
