
#include <stdio.h>  
int insertSorted(int arr[], int n, int key, int capacity) 
{  
	if (n >= capacity) 
		return n; 

	int i; 
	for (i = n - 1; (i >= 0 && arr[i] > key); i--) 
		arr[i + 1] = arr[i]; 

	arr[i + 1] = key; 

	return (n + 1); 
} 

int main() 
{ 
	int arr[20] = { 12, 16, 20, 40, 50, 70 }; 
	int capacity = sizeof(arr) / sizeof(arr[0]); 
	int n = 6; 
	int i, key = 26; 

	printf("\nBefore Insertion: "); 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 

	n = insertSorted(arr, n, key, capacity); 

	printf("\nAfter Insertion: "); 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 

	return 0; 
} 

