#include<stdio.h>
#include<math.h>
//int findMax(int x,int y){
//	int z = x - y;
//   int i  = (z  >>  31)  &  0x1;
//   int  max  =  x - i  *  z;
//   return max;
//}
//int findMax(int x,int y){
//   int z;
//   z=x/y;
//   switch(z){
//   	case 0:
//   		return y;
//   	default:
//   		return x;
//   }
//}
int findMax(int x,int y){
	int max= ((x+y)+abs(x-y))/2;
	
	return max;
}
int main(){
	int a,b,t=1;
	while(t){
	
	scanf("%d%d",&a,&b);
	
	printf("%d",findMax(a,b));
	}
}
