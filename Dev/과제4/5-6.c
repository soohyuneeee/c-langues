#include<stdio.h>
main()
{
	int n, r;
	scanf("%d",&n);
	r=(n/10)+(n%10*10);
	r=r*2;
	r=r%100;
	printf("%d\n",r);
	if(r<=50)
		printf("GOOD");
	else
		printf("OH MY GOD");
		
}
