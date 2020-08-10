#include <stdio.h>
int search(int arr[], int l,int r ,int x) 
{ 
	if(r>=l){
		int m=l+(r-l)/2;
		if(arr[m] == x)	
		   return m;
		if(arr[m]>x)
		  return search(arr,l,m-1,x); //l=m+1
		return search(arr,m+1,r,x); //r=m-1
	}
	else
	 return -1;
} 

int main(void) 
{ 
	int arr[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x = 10; 
	int result = search(arr, 0, n-1, x); 
	(result == -1) ? printf("Element is not present in array") 
				: printf("Element is present at index %d", 
							result); 
	return 0; 
} 

