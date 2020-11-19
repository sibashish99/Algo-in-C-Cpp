//count special char and space
#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	int i,count=0;
	scanf("%[^\n]s",s1);
	for(i=0;i<strlen(s1);i++){
		if(s1[i]>=97 && s1[i]<=122)
		   continue;
		if(s1[i]>=65 && s1[i]<=90)
		   continue;
		if(s1[i]>=48 && s1[i]<=57)
		   continue;
		else
		   count++;
		   
	}
	printf("%d",count);
}
