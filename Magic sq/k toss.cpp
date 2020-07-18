#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
	int flag;
	for(int i=2;i<=n;i++){
		flag*=i;
	}
	return flag;
}
double countHead(int n, int r){
	double res;
	
	int val= fact(n)/(fact(r) * fact(n-r));
	res = val /pow(2,n);
	
	return res;
}
int main(){
	int n,r;
	cin>>n>>r;
	
	cout<<countHead(n,r);
}
