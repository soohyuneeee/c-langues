#include<stdio.h>
main()
{
	int a,b,c;
	double sum;
	scanf("%d %d %d",&a,&b,&c);
	sum=(a+b+c)/3.0;
	sum=sum*100;
	sum=sum+0.5;
	sum=(int)sum;
	sum=sum/100;
	
	printf("%lf",sum);
}
