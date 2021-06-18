#include <stdio.h>
main()
{
	int a, b, c;
	scanf("%d%d%d",&a, &b, &c);
	if(a+b<=c)
		printf("»ï°¢ÇüÀÌ ¾Æ´Ï´Ù"); 
	else if(a==b&&a==c)
		printf("Á¤»ï°¢Çü");
	else if(a==b||b==c)
		printf("ÀÌµîº¯»ï°¢Çü");
	else if(a*a+b*b==c*c)
		printf("Á÷°¢»ï°¢Çü");
	else
	printf("»ï°¢Çü"); 
 } 
