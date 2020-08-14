#include <stdio.h> 
void insertSort(int arr[], int n) 
{ 
   int key,i,j;
   for(i=1;i<n;i++){
   	  key=arr[i];
   	  j=i-1;
   	 while(j>=0 && arr[j]>key){
   	 	arr[j+1]=arr[j];
   	 	j=j-1;
	 }
   }
   arr[j+1] = key;
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	insertSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 

