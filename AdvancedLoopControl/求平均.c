//��ƽ��
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
	printf("ƽ��ֵ�ǣ�%f\n",sum/count);
	
	return 0;
 } 
