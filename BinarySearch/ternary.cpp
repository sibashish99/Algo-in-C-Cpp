#include <stdio.h>  
int ternarySearch(int l, int r, int key, int ar[]) 
{ 
	if (r >= l) { 

		int mid1 = l + (r - l) / 3; 
		int mid2 = r - (r - l) / 3; 
		
		if (ar[mid1] == key) { 
			return mid1; 
		} 
		if (ar[mid2] == key) { 
			return mid2; 
		} 

		if (key < ar[mid1]) { 

			return ternarySearch(l, mid1 - 1, key, ar); 
		} 
		else if (key > ar[mid2]) { 
 
			return ternarySearch(mid2 + 1, r, key, ar); 
		} 
		else { 

			return ternarySearch(mid1, mid2, key, ar); 
		} 
	} 
	return -1; 
} 
 
int main() 
{ 
	int l, r, key; 
	int ar[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	} 
	key = 5; 

	int result = ternarySearch(0,n-1, key, ar); 
	(result == -1) ? printf("Element is not present in array") 
				: printf("Element is present at index %d", 
							result);
}

