#include <stdio.h>
int main(int argc, char const *argv[])
{
	//���ɳ�ʼ��
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

	//����Ĵ�С
	int a[] = {[2]=2,4,[5]=9};
	printf("�ֽ��ܴ�С��%lu\n",sizeof(a));//��������������ֽڴ�С
	printf("����Ԫ�ش�С��%lu\n",sizeof(a[0]));//����Ԫ�صĴ�С
	printf("����Ĵ�С:%lu\n",sizeof(a)/sizeof(a[0]));
	int length = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < length; i++)
	{
		/* code */
		printf("%d\t",a[i]);
	}
	//search �������ҵ�key�������е�λ��search(key,a[],length)
	int x,loc;
	scanf("%d",&x);
	loc = search(x,a,length);
	if (loc != -1)
	{
		/* code */
		printf("%d�ڵ�%d��λ����\n",x,loc);
	}
	else
	{
		printf("%d������\n",x);
	}
	
	
	return 0;
}