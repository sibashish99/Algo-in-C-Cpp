#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char s1[100];
	
	scanf("%s",s1);
	
	int l1=strlen(s1);
    char s2[100];
	for(i=0;i<l1;i++){
	    s1[i]=s1[i];
	}

	int temp,start=0,end=-1;
	for(i=start;i<l1;i++){
		temp=s1[start];
		s1[start]=s1[end];
		s1[end]=temp;
		start++;
		end--;
	}

    int count=0;
     for(i=0;i<l1;i++){
	    if(s2[i]==s1[i]){
	    	count++;
		}
	}
	printf("%d",count);
	
}
