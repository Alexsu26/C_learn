## 可变数组
**总体思想：**  
创建一个需要大小的数组，并将原数组*拷贝*到新数组，释放原数组空间
**缺点**  
- 拷贝数组需要时间
- 总会存在内存不够不能拷贝的情况
----------

> 存在问题：  
无法引入头文件array.h，暂时未找到解决办法，搁置  
*测试markdown与html标签是否一致*  
*Github上标签显示与VS Code上不一致，无法显示出颜色*

> Github上使用标签导致markdown语法有误，删除后正常

## 链表
**for循环中无终止条件也能通过编译器，但运行会出错！**
```C
for( p=list.head;p;p->next)
{
        if( p->value == number)
        {
            printf("找到了\n");
            isFound = 1;
            break;
        }
}
```
*终止条件应该为`p=p->next`,但是可以写成`p->next`，编译不报错，程序出错*

---------

```C
for ( q=NULL,p=list.head; p ; q=p,p=p->next){
    if (p->value == number){
        //p->name出现在=左边， 使用之前必须保证不为NULL
        if ( q ){
            q->next = p->next;
        }
        else{
            list.head = p->next;
        }
    }
    free(p);
    break;   
}
```
其中`break`应放在`if`之中，即
```C
if (p->value == number){
    //p->name出现在=左边， 使用之前必须保证不为NULL
    if ( q ){
        q->next = p->next;
    }
    else{
        list.head = p->next;
    }
    free(p);
    break;
}
```
否则会导致内存空间提前释放，输出错误