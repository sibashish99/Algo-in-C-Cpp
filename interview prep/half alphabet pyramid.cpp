#include<stdio.h>
int main(){
	char input,aph='A';
	scanf("%c",&input);
	for(int i=1;i<=(input - 'A' + 1);i++){
		for(int j=1;j<=i;j++){
			printf("%c",aph);
		}
		++aph;
		printf("\n");
	}
}
