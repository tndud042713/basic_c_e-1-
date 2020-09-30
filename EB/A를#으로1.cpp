#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int n,i;
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++){
		if(str[i]=='A') str[i]='#';
	}
	printf("%s",str);

	return 0;
}

