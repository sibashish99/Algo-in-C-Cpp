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
