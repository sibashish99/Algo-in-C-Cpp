#include <math.h>
#include <stdio.h>
int main() {
   int num, originalNumber, rem, count = 0;
   double result = 0.0;
    scanf("%d",&num);

     originalNumber = num;

     while (originalNumber != 0) {
         originalNumber /= 10;
         ++count;
      }
      originalNumber = num;

      while (originalNumber != 0) {
         rem = originalNumber % 10;
         result += pow(rem, count);
         originalNumber /= 10;
      }

      ((int)result == num)?printf("yes"):printf("No");
     


}
