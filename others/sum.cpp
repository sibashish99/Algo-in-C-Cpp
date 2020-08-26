// C Program to add two numbers 
// without using arithmetic operator 
#include<stdio.h> 

int Add(int x, int y) 
{ 
    if (y == 0) 
        return x; 
    else
        return Add( x ^ y, (x & y) << 1); 
} 

int main() 
{ 
	printf("%d", Add(15, 32)); 
	return 0; 
} 

