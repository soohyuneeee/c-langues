//2�� �������� �������.
#include <stdio.h>
int main()
{
	//1. ��������
	int i;
	int n=31;
	long long val=1; 
	//1-1. n�� �Է¹ޱ�
	scanf("%d",&n); 
	
	//2. n����ŭ 2�� ���ϱ�
	for (i=1;i<=n;i=i+1)
	{
		val=val*2;
	}
	//3. ����ϱ�  
	printf("2�� %d���� %lld�Դϴ�.",n,val);
	return 0;
 } 
