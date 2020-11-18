//#include <stdio.h>
//int main(){
//    int a[100],b[100],n;
//    int i  ,j ;
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//    	scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++){
//    	scanf("%d",&b[i]);
//	}
//    int c[100],k=0;
//    for (i = 0; i<n; i++){
//        for (j = 0; j<n; j++){
//            if (a[i] == a[j]){
//                continue;
//            }
//            else{
//               c[k]=a[i];
//			k++; 
//            }
//        }
//    }
//    while(i<=k){
//    	printf("%d ",c[i]);
//    	i++;
//	}
// 
//}
#include<stdio.h>
int isFound(int t, int *str, int l){
	int i;
	for(i=0;i<l;i++){
		if(str[i]==t){
			return 1;
		}
	}
	return 0;
}
int main(){
	int i;
	int a[100],b[100],n;
	
	scanf("%d",&n);
    for(i=0;i<n;i++){
  	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
    	scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		if(isFound(a[i],b,n)==0){
			printf("%d ",a[i]);
		}
	}
}
