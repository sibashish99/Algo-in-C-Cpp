#include <stdio.h>  
#include <string.h>  
int main()  
{  
int num, i, j;  
char name[15][20], temp[20];  
scanf("%d", &num);   
for(i=0;i<=num; i++)  
{     
  fgets(name[i], sizeof name, stdin);  
}  
for(i=1;i<=num;i++)  
{
 for(j=0;j<=num-i;j++)  
  {
  	if(strcmp(name[j],name[j+1])>0)  
     {   
       strcpy(temp,name[j]);  
       strcpy(name[j],name[j+1]);  
       strcpy(name[j+1],temp);  
     } 
  }
 } 

for(i=0;i<=num;i++)  
   printf("%s\n",name[i]);   
}  
