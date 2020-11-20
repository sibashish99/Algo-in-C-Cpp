#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string a="nice", b;
	int n=4;
	
		for(int i=n/2-1;i>=0;i++){
			b=b+a[i];
		}
	    cout<<b;
	    for(int i=n/2;i<=n;i++){
			b=b+a[i];
		}
		cout<<b;
}

