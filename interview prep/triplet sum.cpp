#include <stdio.h>
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
	int l, r; 

	for (int i = 0; i < arr_size - 2; i++) { 

		for (int j = i + 1; j < arr_size - 1; j++) { 

			for (int k = j + 1; k < arr_size; k++) { 
				if (A[i] + A[j] + A[k] == sum) { 
					printf("Triplet is %d, %d, %d", 
						A[i], A[j], A[k]); 
					return true; 
				} 
			} 
		} 
	} 

	return false; 
} 

int main() 
{ 
	int A[100],arr_size;
	scanf("%d",&arr_size); 
	for(int i=0;i<arr_size;i++){
		scanf("%d",&A[i]);
	}
	int sum;
	scanf("%d",&sum); 
	 
	find3Numbers(A, arr_size, sum); 
	return 0; 
} 

