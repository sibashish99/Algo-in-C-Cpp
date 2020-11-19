//sock merchent hackerrank problem
#include<stdio.h>
int main(){
	int n,a[100],freq[100]={ };
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		freq[a[i]]++;
	}
	int count=0;
	for(int i=0;i<n;i++){
		count+=freq[i]/2;
	}
	printf("%d",count);
	
}
