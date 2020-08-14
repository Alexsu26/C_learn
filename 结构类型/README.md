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
