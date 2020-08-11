#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/*
	char word[] = {'H','e,','l','l','o','\0'};//字符串
	char word2[] = {'H','e,','l','l','o'};//字符数组
	//字符串存在形式为数组，访问形式为指针或数组

	//定义字符串变量
	char *str = "Hello";
	char word3[] = "Hello";
	char line[10] = "Hello";//占据6个字符
	*/

	int ch;

	while((ch=getchar()) != EOF)
	{
		putchar(ch);
	}
	//用户输入之间shell连接
	printf("EOF\n");//ctrl+z 结束
	return 0;
}