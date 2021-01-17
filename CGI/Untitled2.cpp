// Input
// The input consists of two space separated integers- data and digit, representing the data to be encoded and the digit to be counted in the data

// Output
// Print an integer representing the count of the specific digit.

// Example Input:
// 572378233 3
// Output:
// 3
	
#include<iostream>
#include<math.h>
using namespace std;
int main(){   
	int k;
	long long int n;
	cin>>n>>k;
	long long int count=0;
	
	while(n>0){
		count = (n%10==k)? count+1:count; 
		n=n/10;
	}
        cout<<count<<endl;
}
