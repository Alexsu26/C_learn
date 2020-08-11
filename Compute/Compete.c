#include <stdio.h>
 int main(){
 	/*
	 //调试——交换两个变量值 
	int a=10,b=5,c=0;
 	printf("a=%d,b=%d\n",a,b);
 	c = a;
 	a = b;
 	b = c;
 	printf("a=%d,b=%d\n",a,b);
 	
 	*/
 	
 	//复合赋值
	int total=10,sum=1;
	total *= (sum+12);//total = total*(sum+12)
	total++;//total = total + 1
	
	int a = 10;
	printf("a++=%d\n",a++);//a++输出的是a原来的值，但a本身加1 
 	printf("a=%d\n",a);
 	printf("++a=%d\n",++a);//++a输出的是a+1，a本身也+1 
 	printf("a=%d\n",a);
 	
 	
 }
