#include<stdio.h>
#include<math.h>
//prime no sort
int primeIs(int num){
	int i;
	for(i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return 0;
		}
	    else{
		  return 1;
		}
	}
}

int main(){
    int n,k,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
	   if(primeIs(a[i])==1){
	   	printf("%d ",a[i]);
	   }
	}
	for(int i=0;i<n;i++){
	   if(primeIs(a[i])==0){
	   	printf("%d ",a[i]);
	   }
	}
}
