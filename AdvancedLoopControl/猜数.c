//猜数游戏
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
		printf("猜一猜1-100的数:");
		scanf("%d",&a);
		count++;
		if( a > num)
			printf("大了\n");
		else if( a < num)
			printf("小了\n");
	}while( a != num);
	printf("你猜中了！猜了%d次，答案是%d",count,num);
	
	return 0;
 } 
