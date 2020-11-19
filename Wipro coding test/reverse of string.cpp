#include<stdio.h>
#include<string.h>
int main(){
   int i,j=0;
   char s1[100],s2[100];
   scanf("%s",s1);
   for(i=strlen(s1)-1;i>=0;i--){
   	 s2[j]=s1[i];
   	 j++;
   }
   s2[j]='\0';
   printf("%s",s2);
   
}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[100],temp;
//    int i=0,j=0;
//    gets(str);
//    j=strlen(str)-1;
//    while(i<j)
//    {
//        temp=str[j];
//        str[j]=str[i];
//        str[i]=temp;
//        i++;
//        j--;
//    }
//    
//    puts(str);
//    return 0;
//}
