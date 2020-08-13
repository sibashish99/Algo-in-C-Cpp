#include<stdio.h>
#include<math.h>
void pythagorean(int limit)
{ 
   int a, b, c=0;
   int m = 2,n;
   
   while (c < limit)
   {
     for (n = 1; n < m; ++n)
    {
      a = (m*m)-(n*n);
      b = (2*m*n);
      c = (m*m + n*n);

      if (c > limit)
          break;
      printf("%d %d %d\n", a, b, c);
    }
    m++;
   }
}
int main()
{
  int limit;
  printf("Enter limits:");
  scanf("%d",&limit);
  
  pythagorean(limit);

}
