//town of house problem
#include<stdio.h>
#include<string.h>
int checkVow(char ch){
	if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' || ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' )
		return 1;
	else
	   return 0;
	
}
int main(){
	char s[100],t[100];
	gets(s);
	
	int i,j=0;
	while(s[i]!=0){
		if(checkVow(s[i])==0){
			t[j]=s[i];
			j++;
		}
		i++;
	}
	t[j]='\0';
	strcpy(s,t);
	printf("%s",s);
}
