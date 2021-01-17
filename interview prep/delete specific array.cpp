#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int item;
	scanf("%d",&item);
	
	int pos,flag=0;
	
	for(int i=0;i<n;i++){
		if(a[i]==item){
			pos=i;
			flag=1;
		}
	}
	int temp[100];
	if(flag==1){
		for(int i=0;i<n-1;i++){
			if(i<pos){
				temp[i]=a[i];
			}
			if(i>=pos){
				temp[i]=a[i+1];
			}
		}
		for(int i=0;i<n-1;i++){
		  printf("%d ",a[i]);     
		}	
	}
	else
	  printf("Not found");
}
