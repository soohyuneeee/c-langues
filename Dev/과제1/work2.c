//2의 제곱승을 출력하자.
#include <stdio.h>
int main()
{
	//1. 변수선언
	int i;
	int n=31;
	long long val=1; 
	//1-1. n을 입력받기
	scanf("%d",&n); 
	
	//2. n번만큼 2를 곱하기
	for (i=1;i<=n;i=i+1)
	{
		val=val*2;
	}
	//3. 출력하기  
	printf("2의 %d승은 %lld입니다.",n,val);
	return 0;
 } 
