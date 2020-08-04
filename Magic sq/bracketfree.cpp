#include<stdio.h>
int main()
{
 int i=0,c=0,j=0;
 char a[100],b[100];

 printf("\nEnter the string : ");
 scanf("%s",a);
while(a[i]!='\0')
{
 if((a[i]=='(' && (a[i-1]=='-')))
 {
  (c==0)?j=i:j=c;
  while(a[i]!=')')
  {
   if(a[i+1]=='+')
     b[j++]='-';
   else if(a[i+1]=='-') 
    b[j++]='+';
   else if(a[i+1]!=')')
    b[j++]=a[i+1];
   i++;
  }
   c=j+1;
 }
 else if(a[i]=='(' && a[i-1]=='+')
 {
   (c==0)?j=i:j=c;
   while(a[i]!=')')
   {
     b[j++]=a[i+1];
     i++;
   }
   j--;
   c=j+1;
 }
 else if(a[i]==')')
 {
    i++;
    continue;
 }
 else
   {
     b[j++]=a[i];
   }
   i++;
} 
 b[j]='\0';
 printf("%s",b);
   return 0;
}


