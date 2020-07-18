#include<iostream>
using namespace std;
int findTrail(int n){
	int c=0;
	for(int i=5;n/i>=1;i*=5){
			c+=n/i;
		}
	return c;
	
}
int main(){
	int n;
	cin>>n;
	cout<<findTrail(n);
}
