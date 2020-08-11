#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*
	//&取得变量的地址，操作数必须是变量
	int i = 0;
	int p;
	printf("%p\n",&i);// 自顶向下，先定义的变量地址高
	printf("%p\n",&p);
	*/

	int a[10];
	printf("%p\n",&a);
	printf("%p\n", a);
	printf("%p\n",&a[0] );
	printf("%p\n",&a[1] );
	return 0;
}