#include<bits/stdc++.h> 
using namespace std; 

// A function to sort the algorithm using Odd Even sort 
void oddEvenSort(int arr[], int n) 
{ 
	bool isSorted = false;  

	while (!isSorted) 
	{ 
		isSorted = true; 
 
		for (int i=1; i<=n-2; i=i+2) 
		{ 
			if (arr[i] > arr[i+1]) 
			{ 
				swap(arr[i], arr[i+1]); 
				isSorted = false; 
			} 
		} 

		for (int i=0; i<=n-2; i=i+2) 
		{ 
			if (arr[i] > arr[i+1]) 
			{ 
				swap(arr[i], arr[i+1]); 
				isSorted = false; 
			} 
		} 
	} 

	return; 
} 

void printArray(int arr[], int n) 
{ 
for (int i=0; i < n; i++) 
	cout << arr[i] << " "; 
cout << "\n"; 
} 
 
int main() 
{ 	
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}

	oddEvenSort(arr, n); 
	printArray(arr, n); 

	return (0); 
} 

