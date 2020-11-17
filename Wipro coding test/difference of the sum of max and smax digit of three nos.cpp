//(i/p)
//a=115  -> 5
//b=352   ->5
//c=115  ->5    largest digit 
//total  ->15
//
//         1    second largest digit
//         3
//         1
//    total-> 5
//    
//    diff = 15 -5 = 10(o/p)
#include<stdio.h>
int fun(int num){
	int max=0, smax=0, digit;
	
	while(num!=0){
		digit=num%10;
	    if(max<digit){
		smax=max;
		max=digit;
	   }
	   else if(digit>smax){
	    smax=digit;
	   }
	   num/=10;
	}
	return (max-smax);
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum= fun(a) + fun(b) +fun(c);
	printf("%d",sum);
}
