#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[100];
   for(int i=0;i<n;i++){
   	 scanf("%d",&a[i]);
   }
   int maxDiff=0;
   for(int i=0;i<n;i++){
   	for(int j=i;j<n;j++){
   		if(a[j]-a[i]>maxDiff){
   			maxDiff= a[j]-a[i];
		   }
	   }
   }
   printf("%d",maxDiff);
}
