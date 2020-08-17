//#号开头的是编译预处理指令
//#用来定义一个宏
#include <stdio.h>

const double PI = 3.14159;
#define PI 3.14159
#define FORMAT "%f\n"
//define：简单的文本替换
#define PI2 2*PI //pi*2,注释也是宏的注释
#define PRT printf("%f ",PI); \
            printf("%f\n",PI2)
//两行之间用\连接

int main(int argc, char const *argv[])
{
    // printf(FORMAT,2*PI*3.0);
    // printf("%f\n",PI2*3.0);
    PRT;

    //预定义的宏
    printf("%s:%d\n",__FILE__,__LINE__);
    printf("%s,%s\n",__DATE__,__TIME__);
    return 0;
}
