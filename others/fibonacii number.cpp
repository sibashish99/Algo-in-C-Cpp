 // 0 1 1 2 3 5 8 13 21 34  55 .... 
#include<stdio.h> 
int fib(int n) 
{ 
int a = 0, b = 1, c, i; 
if( n == 0) 
	return a; 
for (i = 2; i <= n; i++) 
{ 
	c = a + b; 
	a = b; 
	b = c; 
}   
return b; 
} 

int main () 
{ 
int n;
scanf("%d",&n);
printf("%d", fib(n)); 
getchar(); 
return 0; 
} 

