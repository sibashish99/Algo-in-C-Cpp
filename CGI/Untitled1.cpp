#include<iostream>
#include<math.h>
using namespace std;
int isPer(int num){
	float sr;
	sr=sqrt((double)num);
	if((sr - floor(sr))==0)
	   return 1;
	else
	   return 0;
}
int main(){
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c;
	for(int i=0;i<n;i++){
		if(isPer(a[i])==1){
			c++;
		}
	}
	cout<<c<<endl;
}
