#include <stdio.h>

void f(int *p);
void swap(int *a,int *b);

int main(int argc, char const *argv[])
{
	//指针：保存地址的变量
	int i = 6;
	//int *p = &i;
	//printf("%p\n",p);

	printf("&i=%p\n",&i );
	f(&i);
	printf("i=%d\n",i );

	int a=5,b=6;
	swap(&a,&b);
	printf("a=%d,b=%d\n", a,b);
	return 0;
}

void f(int *p)
{
	printf(" p=%p\n",p );
	printf("*p=%d\n",*p );
	*p = 26;
}

//交换两变量的值只能用指针
void swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//函数有多个返回值，用指针