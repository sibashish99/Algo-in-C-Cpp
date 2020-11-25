#include<stdio.h>
int fact(int num){
	if(num==0 || num==1)
	  return 1;
	else 
	   return num*fact(num-1);
}
int ncr(int a,int r){
	return fact(a)/(fact(r)*fact(a-r));
}
int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("%3d",ncr(i,j));
		}
		printf("\n");
	}
}
