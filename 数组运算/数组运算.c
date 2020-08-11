#include <stdio.h>
int main(int argc, char const *argv[])
{
	//集成初始化
	// int a[] = {1,2,3,4,5,6,7,8,9,0,12};
	// for (int i = 0; i < 11; ++i)
	// {
	// 	/* code */
	// 	printf("%d\t",a[i]);
	// }
	// printf("\n");


	// int a[] = {[2]=2,6};
	// for(int i=0;i<7;i++)
	// {
	// 	printf("%d ",a[i]);
	// }

	//数组的大小
	int a[] = {[2]=2,4,[5]=9};
	printf("字节总大小：%lu\n",sizeof(a));//给出的是数组的字节大小
	printf("单个元素大小：%lu\n",sizeof(a[0]));//单个元素的大小
	printf("数组的大小:%lu\n",sizeof(a)/sizeof(a[0]));
	int length = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < length; i++)
	{
		/* code */
		printf("%d\t",a[i]);
	}
	//search 函数：找到key在数组中的位置search(key,a[],length)
	int x,loc;
	scanf("%d",&x);
	loc = search(x,a,length);
	if (loc != -1)
	{
		/* code */
		printf("%d在第%d个位置上\n",x,loc);
	}
	else
	{
		printf("%d不存在\n",x);
	}
	
	
	return 0;
}