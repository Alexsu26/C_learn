#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
/*
    int number;
    int *a;
    printf("请输入数量:");
    scanf("%d",&number);
    a = (int*)malloc(number*sizeof(int));//malloc申请字节空间
    for(int i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=number-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    free(a);//malloc释放内存
//申请空间失败返回0或者NULL
//地址变了不能free
*/
    void *p;
    int cnt = 0;
    while ( p = malloc(100*1024*1024))
    {
        cnt++;
    }
    printf("分配了%d00MB的内存\n",cnt);
    return 0;
}
