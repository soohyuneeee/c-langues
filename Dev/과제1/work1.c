//데이터 타입의 크기를 출력해보자.
//sizeof(데이터타입)
#include <stdio.h>


int main()
{
	printf("int의 크기는 %d Byte\n",sizeof(int));
	printf("char의 크기는 %d Byte\n",sizeof(char));
	printf("long long의 크기는 %d Byte\n",sizeof(long long));
	printf("double의 크기는 %d Byte\n",sizeof(double));
	printf("long double의 크기는 %d Byte",sizeof(long double));
	return 0;
}
