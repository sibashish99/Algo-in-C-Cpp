#include<conio.h>  
#include<stdio.h>  
#include<string.h>  
int vowel(char);  
int main()  
{  
char s[100], a[100];  
int i, j = 0;  
scanf("%s" ,s);  
for(i = 0; s[i] != '\0'; i++) {  
if(vowel(s[i]) == 0) {          
a[j] = s[i];  
j++;  
}  
}  
a[j] = '\0';  
printf("%s\n", a);  
return 0;  
}  
int vowel(char ch)  
{  
switch(ch)   
{  
case 'a':  
case 'e':  
case 'i':  
case 'o':  
case 'u':  
case 'A':  
case 'E':  
case 'I':  
case 'O':  
case 'U':  
return 1;  
default:  
return 0;  
}  
}  
