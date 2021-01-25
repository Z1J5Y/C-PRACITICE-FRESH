#include<stdio.h>
#include<string.h>
struct Book 
{
	char title[100];
	int num;
	char authur[20];
};
int main(void)
{
	struct Book book1,book2,*pbook1,*pbook2;
	strcpy(book1.title,"woshiren");
	book1.num=1;
	strcpy(book1.authur,"Z1J5Y");
	printf("%s,%d,%s",book1.title,book1.num,book1.authur);
	return 0;
}
