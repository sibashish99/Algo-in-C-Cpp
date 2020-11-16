//tourist visa
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
    	if(s[i]%2==0){
    		s[i]+=1;
		}
		else{
			s[i]-=1;
		}
	}
	printf("%s",s);
	 
}
