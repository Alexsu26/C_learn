#include <stdio.h>

//定义函数一般放main前面，也可以放下面，上面定义

void sum(int begin,int end);//函数的原型声明

int main()
{
	sum(1.2,2);//调用函数时参数类型不匹配编译器会自动匹配
	sum(10,15);
	sum(15,20);

	return 0;
}

void sum(int begin,int end)//实际函数头
{
	//函数体
	int i;//定义在函数内部的变量——本地变量
	int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum += i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}