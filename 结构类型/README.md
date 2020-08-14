# 一些体会
##  枚举
类型使用场景较为局限，多用来保存数字常量，且使用  
```C
enum Name{name0,name1...namen,Numname};
```  
定义
## 结构
通过  
```C
struct point{
  int x;
  int y;
};
```
声明，并用
```C
struct point Name = {x,y};
```
```C
struct point Name;
Name.x = x;
Name.y = y;
```
进行定义与赋值。  

-------------

*结构传入函数的是数值，而非数组类的指针，用通过函数对结构修改，应该用<b>指针</b>*  
> 
```C
struct point *Name1(struct point *p){
  scanf("%d",&p->x);
  scanf("%d",&p->y);
 }
 ```  
 其中<kbd>p->x == (*p).x</kbd>，且<kbd>p</kbd>必须为指针变量

-------------

```C
struct point{
  /*代码块*/
};
```
只是声明结构，相当于typedef一个新的类型名称  
```C
struct point Name;
```
其中*Name*才是所定义的变量名，之后的<kbd>.</kbd>运算都应该以**Name**开始而不是以*point*开始
## 联合
```C
union Name{
  int i;
  char c;
}element;
```
对union类型定义，其中
```C
element.i = x;
element.c = 'char';
```
中的<kbd>int</kbd>类型和<kbd>char</kbd>类型同一时间只有一个有效，占据同一个内存空间， *sizeof(union.)*为成员中的最大值