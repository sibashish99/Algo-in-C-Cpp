#include<iostream>
using namespace std;
void swap(int *xp ,int *yp){
	int temp=*xp;
	*xp =*yp;
	*yp=temp;
}
void seperateOddeven(int a[],int n){
	int left=0,right=n-1;
	while(left<right){
		while(a[left]%2==0 && left<right)
		   left++;
		while(a[right]%2==1 && left<right)
		   right--;
		if(left<right){
			swap(&a[left],&a[right]);
			left++;
			right--;
		}
	}
}
using namespace std;
int main(){
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>a[i];
	seperateOddeven(a,n);
	for(int i=0;i<n;i++)
	   cout<<a[i]<<" ";
}

