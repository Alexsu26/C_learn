#include <stdio.h>

#define cube(x) ((x)*(x)*(x))
#define f1(x) (x * 57.2)
#define f2(x) (x)*57.2
#define f3(x) ((x)*57.2)
 
int main(int argc, char const *argv[])
{
    // int i;
    // scanf("%d",&i);
    // printf("%d\n",cube(i));

    printf("%f\n",f1(5+2));//5+2*57.2
    printf("%f\n",180/f2(1));//180/1*57.2
    printf("%f\n",f3(5+2));//(5+2)*57.2
    printf("%f\n",180/f3(1));//180/(1*57.2)
    return 0;
}