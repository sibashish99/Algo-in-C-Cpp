#include <stdio.h>

int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
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
