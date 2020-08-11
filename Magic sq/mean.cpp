#include <bits/stdc++.h> 
using namespace std; 
double findMean(int a[], int n) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) 
		sum += a[i]; 
	
	return (double)sum/(double)n; 
} 

double findMedian(int a[], int n) 
{ 

	sort(a, a+n); 

	if (n % 2 != 0) 
	return (double)a[n/2]; 
	
	return (double)(a[(n-1)/2] + a[n/2])/2.0; 
} 


int main() 
{ 
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++) 
	   cin>>a[i];
	cout <<findMean(a, n) << endl; 
	cout <<findMedian(a, n) << endl; 
	return 0; 
} 

