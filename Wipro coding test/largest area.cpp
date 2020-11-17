#include<stdio.h>
int main(){
	int a1,a2,b1,b2;
	
	scanf("%d%d",&a1,&b1);
	scanf("%d%d",&a2,&b2);
	
	int area1=(a1*b1)/2;
	int area2= (a2*b2)/2;
	
	int res= (area1>area2)?area1:area2;
	printf("%d",res);	
}
