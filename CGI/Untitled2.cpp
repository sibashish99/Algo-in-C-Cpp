#include<iostream>
#include<math.h>
using namespace std;
int main(){   //occurance of a number in a long no
	int k;
	long long int n;
	cin>>n>>k;
	long long int count=0;
	
	while(n>0){
		count = (n%10==k)? count+1:count; 
	}
        cout<<count<<endl;
}
