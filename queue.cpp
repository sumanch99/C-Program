#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int a[100];
	int i=0,j=0,n=0;
	printf("\nEnter array:");
	gets(str);
	n=strlen(str);
	while(str[i]!=' ')
		printf("%c",str[i]);
	return 0;
}
