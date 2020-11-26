#include<stdio.h>
//int largest(int a[],int n){
//	int m=0;
//	for(int k=0;k<n;k++){
//		if(a[k]>m){
//			m=a[k];
//		}	
//	}
//	return m;
//}
int sLargest(int b[],int n){
	int m=0,sm=0;
	for(int l=0;l<n;l++){
		if(b[l]>m){
			m=b[l];
		}
		if(b[l]>sm && b[l]<m){
			sm=b[l];
		}
	}
	return sm;
}
int main(){
	int n;
	printf("how many:\n");
	scanf("%d",&n);
	int a[100];
	printf("Enter:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[100],t=0;
	for(int i=0;i<n;i++){
		b[t]=a[i];
		t++;
	}
//	printf("largest :%d\n",largest(a,n));
	printf("slargest :%d\n",sLargest(b,n));
}
