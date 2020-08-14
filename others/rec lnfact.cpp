
#include <math.h> 
#include <stdio.h> 
long fact(int n) 
{ 
    if (n == 1) 
        return 0; 
    return fact(n - 1) + log(n); 
} 
  

int main() 
{ 
    int n = 3; 
    printf("%ld", fact(n)); 
    return 0; 
} 
