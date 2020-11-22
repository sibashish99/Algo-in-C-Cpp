#include<stdio.h>
#include<string.h>
//int main(){
//	char a[1000];
//	int i,c=0;
//	gets(a);
//	
//	if(a[0]==' '){
//		c=0;
//	}
//	else{
//		c=1;
//	}
//	while(a[i]!='\0'){
//		if(a[i]==' ' && a[i+1]==' ' && a[i+1]!='\0'){
//			c=c+1;
//		}
//		i++;
//	}
//	printf("%d",c);
//}
int main(){
	char a[100];
	int c=0,i;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++){
		if(a[i] == ' ' && a[i+1]!=' '){
			c++;
		}
	}
	printf("%d",c+1);
}
