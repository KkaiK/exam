#include<stdio.h>
void fuc();

int main()
{
	extern char a;
	printf("%d\n",a);
	fuc();
	printf("a: %p\n",&a);
	char c;
	a=a+12;
	char d;
	printf("c: %p\nd :%p",&c,&d);
}
char a=15;
void fuc()
{
	extern char a;
	a=10;
	int b=a;
	printf("def=%d\nb: %p\n",b,&b);

	return ;
}
