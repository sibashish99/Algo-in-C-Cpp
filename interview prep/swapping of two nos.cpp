#include<stdio.h>
//void swap(int *n,int *m){
//	int temp= *n;
//	*n=*m;
//	*m=temp;
//}
void swap(int *n,int *m){
    *n=*n +*m;
    *m=*n -*m;
    *n=*n-*m;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
