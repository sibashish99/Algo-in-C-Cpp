#include<iostream>
using namespace std;
void getPair(int a[],int n,int sum){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==sum){
				printf("%d %d\n",a[i],a[j]);
			}
		}
	}
}
int main(){
	int n;
	cout<<"How many nos:\n";
	cin>>n;
	int a[100];
	
	cout<<"Enter value:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the sum value:\n";
	int sum;
	cin>>sum;
	cout<<"Pairs are:\n";
	getPair(a,n,sum);
}
