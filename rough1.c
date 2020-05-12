#include<stdio.h> 
#include "rough.c"
void main()
{
	int x,y;
	int res;
	printf("Enter 2 No.s: ");
	scanf("%d %d",&x,&y);
	res=greater(x,y);
	printf(" %d ",res);
}
