#include<stdio.h>
main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);
	printf("%.2lf\n", (double)a/b);
}
