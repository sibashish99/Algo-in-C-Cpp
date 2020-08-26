#include<stdio.h>  
#include<conio.h> 
int main()  
   {  
  
       int i, j, a, m, num[30];  
  
       scanf("%d", &m);  
  
  
       for (i = 0; i < m; ++i)  
           scanf("%d", &num[i]);  
  
       for (i = 0; i < m; ++i)   
       {  
  
           for (j = i + 1; j < m; ++j)  
           {  
  
               if (num[i] > num[j])   
               {  
  
                   a =  num[i];  
                   num[i] = num[j];  
                   num[j] = a;  
  
               }  
  
           }  
  
       }  
  
       for (i = 0; i < m; ++i)  
           printf("%d  ", num[i]);  
  
   }  
