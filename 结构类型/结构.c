#include <stdio.h>

struct date//结构的声明
{
    int month;
    int day;
    int year;
};
// struct point
// {
//     int x;
//     int y;
// }p1,p2;

struct date* getStruct(struct date *p);

int main(int argc, char const *argv[])
{
    struct date today = {7,31,2014};//date类型的today变量,并初始化
//struct date today = {.month=7,.year=2014};未给的值为0
    today.month = 8;
    today.day = 13;
    today.year = 2020;

    printf("Today's date is %i-%i-%i\n",
    today.month,today.day,today.year);
//整个结构可以赋值
    struct date p1;
    p1 = (struct date){2,13,2020}; 
    //相当于p1.month=2.....
    struct date p2 = p1;//p1.month = p2.month
    struct date *pDate1 = &p1;
    struct date *pDate2 = &p2;
    printf("address of p1 is %p\n",pDate1);
    printf("address of p2 is %p\n",pDate2);
//整个结构可以作为函数的参数,函数内部是一个新的结构

    struct date myday;
    struct date *p = &myday;

    return 0; 
 }

 struct date *getStruct(struct date *p)
 {
     scanf("%d",&p->day);
     scanf("%d",&p->month);
     scanf("%d",&p->year);
     //p->month == (*p).month;p必须是一个指针
     return p;
 }