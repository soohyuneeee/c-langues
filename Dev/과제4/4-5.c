#include <stdio.h>
int main(){
	int a=2,b=3,c=4;
	a= ++a + ++a;
	a=2,b=2,c=4;
	b= ++c + c++ + c++;
	printf("%d,\n%d",a,b);
}
