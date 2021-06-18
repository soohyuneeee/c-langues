#include<stdio.h>
main()
{
	int n, n1, n2, n3, i, sum =0;
	printf("자연수 입력 : ");
	scanf("%d", &n);
		n1 = n/100;
		n2 = n%100/10;
		n3 = n%10;
		sum = n1+n2+n3;
	printf("%d\n", sum);
	
}
