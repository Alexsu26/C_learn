//全局变量：定义在函数外部的变量
//未初始化的全局变量会默认为0值
#include <stdio.h>

int gAll = 12;

int f(void);

int main(int argc, char const *argv[])
{
    printf("in main gAll = %d\n",gAll);
    f();
    printf("in main gAll+=2 ->%d\n",gAll);
    
    return 0;
}

int f(void)
{
    {
        int gAll = 11;//全局变量会被局部变量顶替
        printf("in f gAll = %d\n",gAll);
    }
    gAll += 2;
    printf("in f gAll+=2 ->%d\n",gAll);
    return gAll;
}