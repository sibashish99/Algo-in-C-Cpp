#include<stdio.h> 
int findElement(int arr[], int n, 
				int key) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == key) 
			return i; 

	return -1; 
} 


int main() 
{ 
	int arr[] = {12, 34, 10, 6, 40}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
 
	int key = 40; 
	int position = findElement(arr, n, key); 

	if (position == - 1) 
		printf("Element not found"); 
	else
		printf("Element Found at Position: %d", position + 1 ); 

	return 0; 
} 

