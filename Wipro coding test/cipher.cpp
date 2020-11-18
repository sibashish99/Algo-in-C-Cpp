
// ciher problem hackerearth
#include <stdio.h>

int main(){
   int k,i;
   char m[1000000];

   scanf("%s",m);
   scanf("%d",&k);

   for(i=0;m[i]!='\0';i++){
	   switch(m[i]){
		   case 'A' ... 'Z':
		       m[i]=((m[i]-65+k)%26)+65;
			   break;
		   case 'a' ... 'z':
		       m[i]=((m[i]-97+k)%26)+97;
			   break;
		   case '0' ... '9':
		       m[i]=((m[i]-48+k)%10)+48;
			   break;
		   default :
		       m[i]=m[i];
			   break;
			
	   }
   }
   printf("%s",m);



}
