  
// magic squares
#include <bits/stdc++.h> 
using namespace std; 
  
void generateSquare(int n)  
{  
    int magicSquare[n][n];  
    int i = n/2,j = n-1; 
     
	memset(magicSquare, 0, sizeof(magicSquare));  
      
    for (int num = 1; num <= n*n; )  
    {  
        if (i == -1 && j == n)   
        {  
            j = n-2;  
            i = 0;  
        }  
        else
        { 
            if (j == n)  //if j value excides index value means n-1
              {
              	  j = 0;  
			  }
            if (i < 0) //if i value is -1
              {
              	  i = n - 1;  
			  }
        }  
        if (magicSquare[i][j]) //if position already occupied
        {  
            j -= 2;  
            i++;  
            continue;  
        }  
        else
        {
           	 magicSquare[i][j] = num++;
		} 
        j++; i--; 
    }  
    
    for (i = 0; i < n; i++)  
    {  
        for (j = 0; j < n; j++)  
            cout<<magicSquare[i][j]<<" ";  
        cout<<endl; 
    }  
}  
    
int main()  
{  
    int n = 7;   
    generateSquare (n);  
    return 0;  
}  
  
