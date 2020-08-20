#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int large =(a<b)?((b<c)?c: b):((a<c)?c:a) ;
	printf("%d",large);
}
