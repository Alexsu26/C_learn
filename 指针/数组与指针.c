//函数中的数组代表指针
void max(int a[],...);
void max(int *a,...)
//数组变量是特殊的指针，
int a[10];
int *p = a;//取地址无需用&
a == &a[0]
p[0] = a[0]
*a = 25;
const int *x//指针不可修改
int const *x//指针不可修改
int *const x//指针所指不可修改
