//E-commerce
#include<stdio.h>
int main(){
    
    int t=1;
   while(t){
   	int n;
    scanf("%d",&n);
    if(n>=30 && n<=50)
        printf("D");
    if(n>=51 && n<=60)
        printf("C");
    if(n>=61 && n<=80)
        printf("B");
    if(n>=81 && n<=100)
	    printf("A"); 
   }
}
