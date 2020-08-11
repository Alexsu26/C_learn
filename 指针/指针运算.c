#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9};
	char *p = ac;
	char *p1 = &ac[5];
	printf("p  =%p\n", p);
	printf("p+1=%p\n", p+1);
	printf("*(p+1)=%d\n", *(p+1));
	printf("p1=%p\n", p1);
	printf("p1-p=%d\n", p1-p);
	//*(p+n) == ac[n]
	int ai[] = {0,1,2,3,4,5,6,7,8,9,-1};
	int *q = ai;
	int *q1 = &ai[6];
	printf("q  =%p\n", q);
	printf("q+1=%p\n", q+1);
	printf("q1=%p\n", q1);
	printf("q1-q=%d\n", q1-q);//指针相减-->两地址间有多少个单位


	printf("sizeof(ac[0])=%d\n", sizeof(ac[0]));
	printf("sizeof(ai[0])=%d\n", sizeof(ai[0]));
//*p++:取出p所指的值,并＋1
	for(int i=0;i<sizeof(ac)/sizeof(ac[0]);i++)
	{
		printf("%d ", ac[i]);
	}
	printf("\n");
	while( *q != -1)
	{
		printf("%d ",*q++);
	}
//指针可以做<;<=;>'>=;!='
	//void*表示不知道指向什么类型的指针
	return 0;
}