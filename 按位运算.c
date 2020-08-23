#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char c = 0xAA;
    printf("c=%hhx\n",c);//16进制的c
    printf("~c=%hhx\n",(char)~c);//c的取反，返回为int
    printf("-c=%hhx\n",(char)-c);//c的补码，返回为int
    return 0;
}
