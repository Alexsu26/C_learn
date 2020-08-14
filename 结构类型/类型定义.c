//自定义数据类型
//typedef int length
#include <stdio.h>

int main(int argc, char const *argv[])
{
    typedef long int64_t;//重新加载已有的类型名字
    typedef struct Adate
    {
        int month;
        int day;
        int year;
    } Date;//将struct Adate 变为了Date类型，简化名字
    Date d = {9,10,2020};
    int64_t i = 100000000;
    printf("%i-%i-%i\n",d.month,d.day,d.year);

    
    return 0;
}
