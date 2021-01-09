#include<stdio.h>
#include<string.h>
int main(){
	char s1[1000000];
	gets(s1);
	int l=strlen(s1);
	int count=0;
	
	for(int i=0;i<l;i++){
		if(s1[i]==1 ||s1[i]==2 || s1[i]==3 || s1[i]==4 ||s1[i]==5 ||s1[i]==6 ||s1[i]==7 || s1[i]==9 || s1[i]==9){
			count++;
		}
	}
	if(count==9)
	   printf("yes");
	else
	   printf("No");
}
