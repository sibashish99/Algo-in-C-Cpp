#include<iostream>
using namespace std;
int countWays(int n , int m){
	int d[m+1][n+1];
	
	for(int i=0;i<=n;i++){
		d[1][i]=1;
	}
	
	int sum;
	for(int i=2;i<=m;i++){
		for(int j=0;j<=n;j++){
			sum=0;
			for(int k=0;k<=j;k++){
				sum= sum + d[i-1][k];
			}
			d[i][j]=sum;
		}
	}
	 return d[m][n];
}

int main(){
	int N,K;
	cin>>N;
	cin>>K;
	
	cout<<countWays(N,K);
}
