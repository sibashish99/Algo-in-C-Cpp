#include <stdio.h> 
void merge(int arr[], int l, int m, int r) 
{   
    int i=l , j=m+1, k=l, b[100];
    while(i<=m && j<=r){
    	if(arr[i] <= arr[j]){
    		b[k] = arr[i];
    		i++;
		}
		else{
			b[k] = arr[j];
			j++;
		}
		k++;
	}
	if(i > m) { 
	  while(j<=r)
		b[k] = arr[i]; 
		j++; 
		k++; 
	} 
	else{ 
	  while(i<=m)
		b[k]=arr[i];
		i++; 
		k++; 
	} 

} 

void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) { 
		int m = (l + r) / 2; 
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 
		merge(arr, l, m, r); 
	} 
} 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[100],arr_size,i;
	scanf("%d",&arr_size);
	
	for(i=0;i<arr_size;i++)
	   scanf("%d",&arr[i]);

	mergeSort(arr, 0, arr_size - 1); 
	printArray(arr, arr_size); 
} 

