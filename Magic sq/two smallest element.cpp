#include <stdio.h> 
#include <limits.h>
void print2Smallest(int arr[], int n) 
{ 
	int i, first, second; 

	if (n < 2) 
	{ 
		printf(" Invalid Input "); 
		return; 
	} 

	first = second = INT_MAX; 
	for (i = 0; i < n ; i ++) 
	{ 
	
		if (arr[i] < first) 
		{ 
			second = first; 
			first = arr[i]; 
		} 

		else if (arr[i] < second && arr[i] != first) 
			second = arr[i]; 
	}
	printf("Result : ");
	(second == INT_MAX)? printf("There is no second smallest element\n"): printf("%d\n%d", first, second); 
} 

int main() 
{ 
	int arr[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i])	;
	}
	print2Smallest(arr, n);  
} 

