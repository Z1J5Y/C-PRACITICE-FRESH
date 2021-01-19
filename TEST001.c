#include<stdio.h>
#include<stdlib.h>
int Gvar1,Gvar2;
float Gvar3;
char Gvar4;
static int STATICvar5;
void main()
{
	int var1,var2;
	float var3;
	char var4;
	static int STATICvar5;
	int *pvar1;
	char *a="wo shi ge hao ren!";
	int *pvar2=(int*)malloc(sizeof(int));
	printf("var1的地址为:%p\n",&var1);
	printf("var2的地址为:%p\n",&var2);
	printf("var3的地址为:%p\n",&var3);
	printf("pvar1的地址为:%p\n",&pvar1);
	printf("pvar2的地址为:%p\n",&pvar2);
	printf("a的地址为:%p\n",a);
	printf("Gvar1的地址为:%p\n",&Gvar1);
	printf("Gvar2的地址为:%p\n",&Gvar2);
	printf("Gvar3的地址为:%p\n",&Gvar3);
	printf("Gvar4的地址为:%p\n",&Gvar4);
	printf("STATICvar5的地址为:%p\n",&STATICvar5);
}