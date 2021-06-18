#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d",&a, &b);
	printf("%d\n", a-b);
	c=a-b;
	printf("%d\n", c/500);
	c=c%500;
	printf("%d\n", c/100);
	return 0;
}
