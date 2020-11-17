//no of non repeating character
#include<stdio.h>
#include<string.h>
int main(){
    char s[100],f,count=0;
    scanf("%d",s);
    for(int i=0;s[i];i++){
      if(s[i]!=-1){
		 f=0;
    	 for(int j=i+1;s[j];j++){
    	 	if(s[i]==s[j]){
    	 		f=1;
    	 		s[j]=-1;
			 }
		 }
		 if(f==0)
		 {
		 	count++;
		 }
	 }
   }
	printf("%d",count);
    
}

