#include<stdio.h>
#include<string.h>
int isFound(char c, char *str, int l){
	int i;
	for(i=0;i<l;i++){
		if(str[i]==c){
			return 1;
		}
	}
	return 0;
}
int main(){
	int i;
	char s1[100],s2[100];
	
	scanf("%s",s1);
	scanf("%s",s2);
	
	int l1=strlen(s1);
	int l2=strlen(s2);
	
	for(i=0;i<l2;i++){
		if(isFound(s2[i],s1,l1)==0){
			printf("%c",s2[i]);
		}
	}
}
