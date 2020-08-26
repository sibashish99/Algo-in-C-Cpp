#include <stdio.h> 
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
    
	for (int i = 0; i < arr_size - 2; i++) { 

		for (int j = i + 1; j < arr_size - 1; j++) {  
				if (A[i] + A[j]  == sum) { 
					printf(" %d %d ", 
						A[i], A[j]); 
					return true; 
				} 
		 } 
	} 
     return false; 
} 

int main() 
{ 
	int A[100] , sum ,arr_size;
	scanf("%d",&arr_size);
	for(int i=0;i<arr_size;i++){
		scanf("%d",&A[i]);
	}
	scanf("%d",&sum);
	find3Numbers(A, arr_size, sum); 
	return 0; 
} 

