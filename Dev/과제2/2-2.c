#include <stdio.h>

void func()
{
	auto int num1= 0;  //�ڵ� ���� �� �� �ʱ� ȭ  
	
	printf("%d\n", num1);    //���� num1�� ���� �� ��  
	num1++;    //������ ���� 1�� ����  
}

int main()
{
	func();
	func();
    func();
	func();
	return 0;
			
 } 
