// C++ program to check if given array 
// has 2 elements whose sum is equal 
// to the given value 

// Works only if range elements is limited 
#include <stdio.h> 
#define MAX 100000 

void printPairs(int arr[], int arr_size, int sum) 
{ 
	int i, temp; 

	/*initialize hash set as 0*/
	bool s[MAX] = { 0 }; 

	for (i = 0; i < arr_size; i++) { 
		temp = sum - arr[i]; 
		if (s[temp] == 1) 
			printf( 
				"Pair with given sum %d is (%d, %d)\n", 
				sum, arr[i], temp); 
		s[arr[i]] = 1; 
	} 
} 

/* Driver program to test above function */
int main() 
{ 
	int A[] = { 0, 4, 2 , 45, 6, 10, 8 }; 
	int n = 10; 
	int arr_size = sizeof(A) / sizeof(A[0]); 

	printPairs(A, arr_size, n); 

	getchar(); 
	return 0; 
} 

