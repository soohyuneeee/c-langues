#include<stdio.h>
main()
{
	int h,a,b,c;
	scanf("%d",&h);
	c=h%10;
	b=(h/10)%10;
	a=(h/100);

	printf("%d",a+b+c);
}
