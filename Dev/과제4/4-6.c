#include<stdio.h>
main()
{
	int a=2,b=3,c=4,d=5; 
	printf("%d\n",a= ++a + ++a); 
	 a=2,b=3,c=4,d=5;
	printf("%d\n",b=++b - --c); 
	 a=2,b=3,c=4,d=5;
	printf("%d\n",c=++b /b++); 
	 a=2,b=3,c=4,d=5;
	printf("%d\n",d=10 % c++);
	 a=2,b=3,c=4,d=5;
	printf("%d\n",a = ++c + c++ + c++);
	 a=2,b=3,c=4,d=5;
	printf("%d\n",b=10 + ++a);
	 a=2,b=3,c=4,d=5;
	printf("%d\n",c=10 - --d);
	 a=2,b=3,c=4,d=5;
	printf("%d\n",c=++a * b++);

}
