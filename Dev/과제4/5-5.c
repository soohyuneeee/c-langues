#include<stdio.h>
main(){
	int a=0,b=0;
	int o;
	scanf("%d%c%d",&a, &o, &b);
	switch(o){
		case'+':
			printf("%d",a+b);
			break;
		case'-':
			printf("%d",a-b);
			break;
		case'*':
			printf("%d",a*b);
			break;
		case'/':
			printf("%d",(double)a/b);
			break;
	}
}
