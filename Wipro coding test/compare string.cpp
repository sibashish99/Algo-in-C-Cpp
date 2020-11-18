//#include<stdio.h>
//#include<string.h>
//int main(){
//	int i,j,k=0;
//	char s1[100],s2[100],s3[100];
//	
//	scanf("%s",s1);
//	scanf("%s",s2);
//	
//	int l1=strlen(s1);
//	int l2=strlen(s2);
//	for(i=0;s2[i]!='\0';i++){
//		for(j=0;s1[j]!='\0';j++){
//			if(s2[i]==s2[j]){
//				continue;
//			}
//			else{
//				s3[k]=s1[i];
//				k++;
//			}
//			s3[k]='\0';
//			k=0;
//		}
//	}
//	printf("%s",s3);
//}
#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;
    gets (str1);
    gets (str2);
 
    for (i = 0; str1[i]!= '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k ++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        k = 0;
    }
 
    printf ("%s",str_rem);
 
}
