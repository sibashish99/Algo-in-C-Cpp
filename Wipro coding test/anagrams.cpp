//anagrams probelm in hackerearth

#include <stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int k=0;k<t;k++){
      char s1[10000],s2[10000];
	  int n=0;
	  scanf("%s%s",s1,s2);
	  
	  int l1=strlen(s1);
      int l2=strlen(s2);
	
	  for(int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            if(s1[i]==s2[j]){
				++n;
				s2[j]='0';
				break;
			}
		}
	  }
	  printf("%d\n",(l1+l2-(2*n)));
  }
}

