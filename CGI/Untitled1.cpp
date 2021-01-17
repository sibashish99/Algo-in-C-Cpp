// Input
// The first line of the input consists of an Integer numOfCust, representing the number of customers whose bills are selected for the promotional discount (N).
// The second line consists of N space-separated integers - bill, bill . , bill representing the bill amounts of the N customers selected for the promotional discount,

// Output
// Print an integer representing the number of customers that will be given discounts.

// Constraints
// O<= numofCusts <=105
// 0<=bill <= 10
// O<=numolCust

// Example Input:
// 6
// 25 77 54 81 48 34

// Output:
// 2
	
#include<iostream>
#include<math.h>
int isPer(int num){
	int a;
	float b;
	
	b=sqrt((double)num);
	a=b;
	
	if(a==b){
		return 1;
	}
	else{
		return 0;
	}
	
}
using namespace std;
int main(){
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c=0;
	for(int i=0;i<n;i++){
	   if(isPer(a[i])==1){
	   	  c++;
	   }
	}
	cout<<c<<endl;
	
}
