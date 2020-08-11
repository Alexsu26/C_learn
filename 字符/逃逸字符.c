//由\开头
/*
\b:回退一格
\t:到下一个表格位
\n:换行
\r:回车
*/
#include <stdio.h>

int main(int argc,	 char const *argv[])
{
	printf("123\b");
	printf("45\n");

	printf("12\t3456\n");
	printf("123\t456\n");
	return 0;
}