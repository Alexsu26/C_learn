#include <stdio.h>

int main(int argc, char const *argv[])
{
    //flags
    printf("%09d\n",123);
    printf("%-9d\n",123);
    printf("%+-9d\n",123);

    //width
    printf("%9d\n",123 );
    printf("%9.2f\n",123.23 );
    printf("%*d\n",6,123 );

    //HIL
    //printf("%hhd\n",12345);
    printf("%x\n",12345);
    printf("%d\n",0x39);

    //%n:printf做到%n时已经输出的位数
    int num;
    printf("%d%n\n",123,&num);
    printf("%d\n",num );

    //scanf\printf返回值
    int n;
    int s1 = scanf("%d",&n);//读到几个数
    int s2 = printf("%d\n",n );//读到的位数，包括回车
    printf("%d:%d\n",s1,s2);
    return 0;
}
