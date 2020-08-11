//基本方法：遍历
#include <stdio.h>

int search(int key,int a[],int len)
{
    int ret = -1;
    for(int i=0;i<len;i++)
    {
        if(key == a[i])
        {
                ret = i;
                break;
        }
            
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,2,1,2,5,4};
    int r = search(7,a,sizeof(a)/sizeof(a[0]));
    printf("%d\n",r);
    return 0;
}
