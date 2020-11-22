#include <stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
//alternate
void swap(int m,int n){
   m=m+n;  //m=10 n=20 => m=30
   n=m-n;   //n=30-20=10
   m=m-n;    //m=30-10=20
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);

	swap(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);


}


