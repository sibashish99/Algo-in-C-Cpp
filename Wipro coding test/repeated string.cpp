#include<stdio.h>
#include<string.h>
int main(){
	char s[100],tos[100];
	int c=0,i,j,f;
	gets(s);
	gets(tos);
	int slen=strlen(s), flen=strlen(tos);
	
	for(i=0;i<=slen-flen ;i++){
		f=1;
		for(j=0; j<flen ;j++){
			if(s[i+j]!=tos[j]){
				f=0;
				break;
			}
		}
		if(f==1){
			c++;
		}
		
	}
	printf("%d",c);
	
}
