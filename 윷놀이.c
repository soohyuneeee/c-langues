#include <stdio.h>

int main(){
	int a,b,c,d,sum;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum=a+b+c+d;
	if(sum==1) printf("��");
	if(sum==2) printf("��"); 
	if(sum==3) printf("��");
	if(sum==4) printf("��");
	if(sum==0) printf("��");
	return 0; 
}
