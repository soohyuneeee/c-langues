#include<stdio.h>
main()
{
	int a=1,b=2,c=3,d=4;
	printf("%d\n", b*=a>b?a:b); 
	a=1,b=2,c=3,d=4;
	printf("%d\n",c-=a<b?a-b:b-a);
	a=1,b=2,c=3,d=4; 
	printf("%d\n",d%=c<d?c++:d++);
	a=1,b=2,c=3,d=4; 
	printf("%d\n",c+=b<b?++a:b++);
	a=1,b=2,c=3,d=4;
	printf("%d\n", d/=d%3?a*b:d%c);
	a=1,b=2,c=3,d=4; 
	printf("%d\n", a+=++a%b++?c*d:b/c);
}
