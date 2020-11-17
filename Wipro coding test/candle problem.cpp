#include<stdio.h>
//candle blow problem
int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	int big=a[0],cout=1;
	for(int i=1;i<n;i++){
		if(a[i]==big){
			cout++;
		}
	}
	printf("%d",cout);
	
}
