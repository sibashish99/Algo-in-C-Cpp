// C program to segregate even and odd elements of array
#include<stdio.h>
void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{

	int left = 0, right = size-1;
	while (left < right)
	{

		while (arr[left]%2 == 0 && left < right)
			left++;

		while (arr[right]%2 == 1 && left < right)
			right--;

		if (left < right)
		{
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int arr[100],arr_size,i;
	scanf("%d",&arr_size);
	for (i = 0; i < arr_size; i++)
	    scanf("%d",arr[i]);
	


	segregateEvenOdd(arr, arr_size);

	printf("Array after segregation ");
	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);

	return 0;
}

