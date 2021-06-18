#include <stdio.h>

void func()
{
	auto int num1= 0;  //자동 선언 및 값 초기 화  
	
	printf("%d\n", num1);    //변수 num1의 값을 출 력  
	num1++;    //변수의 값을 1씩 증가  
}

int main()
{
	func();
	func();
    func();
	func();
	return 0;
			
 } 
