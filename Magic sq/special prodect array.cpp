#include <stdio.h> 
#include <stdlib.h> 
void productArray(int arr[], int n) 
{ 

	if (n == 1) { 
		printf("0"); 
		return; 
	} 


	int* left = (int*)malloc( sizeof(int) * n); 
	int* right = (int*)malloc(sizeof(int) * n); 
	int* prod = (int*)malloc( sizeof(int) * n); 

	int i, j; 

	left[0] = 1; 
	right[n - 1] = 1; 

	for (i = 1; i < n; i++) 
		left[i] = arr[i - 1] * left[i - 1]; 

	for (j = n - 2; j >= 0; j--) 
		right[j] = arr[j + 1] * right[j + 1]; 

	for (i = 0; i < n; i++) 
		prod[i] = left[i] * right[i]; 

	for (i = 0; i < n; i++) 
		printf("%d ", prod[i]); 

	return; 
} 

int main() 
{ 
	int arr[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The product array is: \n"); 
	productArray(arr, n); 	getchar(); 
} 

