#include<stdio.h>
void Frequency(int arr[],int n){
	
	int arr_2[100]={0},freq[100]={0};
	int i,j,k,exists;
	for(i=0; i<n;i++){
		exists=0;
		for(k=0;k<i;k++){
			if(arr_2[k]==arr[i])
			{
				exists = 1;
				freq[k]++;
			}
		}
		if(!exists){
			arr_2[j] = arr[i];
			freq[j]++;
			j++;
		}
	}

	printf("\n\nElements with Frequency: \n");
	for(i=0;i<j;i++){
		printf("Element:%d, F:%d\n",arr_2[i],freq[i]);
	}

}

int main(){

	int arr[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
	int i,max;
	Frequency(arr,n);
	
		
}


