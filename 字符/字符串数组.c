#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *a[] = {"0","Jan","Feb","Mar","Apr","May",
    "Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int i;
    printf("请输入月份：");
    scanf("%d",&i);
    printf("%d月的英文是%s\n",i,a[i]);
    return 0;
}
