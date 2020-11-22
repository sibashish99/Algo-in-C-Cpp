#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int i;
	for(i=2;i<=a && i<=b; i=i+2){
	  if(a%i==0 && b%i==0){
	  	printf("%d ",i);
	  }
	}
}
