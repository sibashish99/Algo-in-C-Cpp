#include<iostream>
using namespace std;
int main(){
	long long int n;
	int k;
	cin>>n>>k;
	
	long long int c=0;
	while(n>0){
		c=(n%10==k)?c+1:c;
		n=n/10;
	}
	cout<<c<<endl;
}
