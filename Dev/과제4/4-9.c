#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d",&a,&b);
	a=(a+24);
	b= b+(a)*60;
	b= b-30;
	printf("%d ½Ã %d ºÐ ",(b/60)%24,b%60);
}
	
