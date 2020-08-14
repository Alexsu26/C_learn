#include <array.h>
#include <stdio.h>
#include <stdlib.h>

const BLOCK_SIZE = 5;
// typedef struct
// {
//     int *array;
//     int size;
// } Array;

Array array_create(int init_size)
{
    Array a;
    a.size = init_size;
    a.array = (int*)malloc(sizeof(int)*a.size);
    return a;
}

void array_free(Array *a)
{
    free(a->size);
    a->size = 0;
    a->array = NULL;
}

//封装
int array_size(const Array *a)
{
    return a->size;
}

int *array_at(Array *a, int index)//返回指针便于赋值
{
    if ( index >= a->size)
    {
        array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    }
    return &(a->array[index]);
}

//相当于定义了一个新的数组
void array_inflate(Array *a, int more_size)
{
    int *p = (int*)malloc(sizeof(int)*(a->size+more_size));
    int i;
    // for(i=0;i<a->size;i++)
    // {
    //     p[i] = a->array[i];
    // }
    memcpy((void*)p,(void*)a->array,a->size*sizeof(int));
    free(a->array);
    a->size += more_size;
    a->array = p;
}

int main(int argc, char const *argv[])
{
    Array a = array_create(100);
    printf("%d\n",array_size(&a));
    *array_at(&a,0) = 10;
    printf("%d\n",*array_at(&a,0));
    int number;
    int cnt = 0;
    while( number != -1)
    {
        scanf("%d",&number);
        // scanf("%d",array_at(&a,cnt++));
        if ( number != -1)
            *array_at(&a, cnt++) = number;
    }



    array_free(&a);
    
    return 0;
}
