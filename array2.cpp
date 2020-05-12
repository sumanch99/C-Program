#include <stdio.h>
main()
{
	int a[100],n,i;
	printf("\nEnter the value of n(<=100):)");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n,i++)
	 a[i]=2*a[i];
	printf("\nResultant array:");
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);  
}
