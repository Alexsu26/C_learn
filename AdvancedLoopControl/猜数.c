//������Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int num = rand()%100+1; 
	int count = 0;
	int a = 0;
	do {
		printf("��һ��1-100����:");
		scanf("%d",&a);
		count++;
		if( a > num)
			printf("����\n");
		else if( a < num)
			printf("С��\n");
	}while( a != num);
	printf("������ˣ�����%d�Σ�����%d",count,num);
	
	return 0;
 } 
