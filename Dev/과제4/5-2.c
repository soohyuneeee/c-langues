#include <stdio.h>
main()
{
	int a, b, c;
	scanf("%d%d%d",&a, &b, &c);
	if(a+b<=c)
		printf("�ﰢ���� �ƴϴ�"); 
	else if(a==b&&a==c)
		printf("���ﰢ��");
	else if(a==b||b==c)
		printf("�̵�ﰢ��");
	else if(a*a+b*b==c*c)
		printf("�����ﰢ��");
	else
	printf("�ﰢ��"); 
 } 
