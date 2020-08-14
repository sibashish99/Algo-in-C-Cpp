#include<iostream> 
using namespace std; 
  
bool search(int arr[], int n, int x) 
{ 
    int front = 0, back = n - 1; 

    while (front <= back) 
    { 
        if (arr[front] == x || arr[back] == x) 
           return true; 
        front++; 
        back--; 
    } 
    return false; 
} 
  
int main() 
{ 
   int arr[100],n,i; 
   int x = 130; 
   cin>>n;
   for(i=0;i<n;i++)
      cin>>arr[i];
   if (search(arr, n, x)) 
      cout << "Yes"; 
   else
      cout << "No"; 
   return 0; 
} 
