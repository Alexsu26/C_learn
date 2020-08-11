//求平均
#include <stdio.h>

int main()
{
	int number,count=0;
	float sum = 0.0;
	scanf("%d",&number);
	while( number != -1)
	{
		sum += number;
		count++;
		scanf("%d",&number);	
	}
	printf("平均值是：%f\n",sum/count);
	
	return 0;
 } 
