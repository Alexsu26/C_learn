//定义前加上 static
//函数离开时，静态本地变量继续存在
//特殊的全局变量,其生存期与全局变量一样但是作用域是局部的
#include <stdio.h>

int gAll = 12;

int f(void);

int main(int argc, char const *argv[])
{
    //f();
    //f();
    f();
    

    return 0;
}

int f(void)
{
    static int all = 1;
    printf("in f all = %d\n", all);
    all += 2;
    printf("in f all+=2 ->%d\n", all);
    int k = 0;//本地变量
    printf("&gAll=%p\n",&gAll);
    printf("&all =%p\n", &all);//all和gAll地址相近
    printf("&k   =%p\n", &k);
    return all;
}