//求平均数
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/*
	定义数组
	<类型>变量名称[元素数量]
	所有元素具有相同的数据类型
	从0开始，到数组大小-1
	*/

	/*
	int number[5];//定义数组
	int x;
	int cnt = 0;
	double sum =0 ;
	scanf("%d",&x);

	while( x != -1){
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d",&x);
	}

	if ( cnt > 0)
	{
		printf("%f\n",sum/cnt );
		for (int i=0; i < cnt; i++)
		{
			if(number[i]>sum/cnt){
				printf("%d\n",number[i]);
			}
		}
	}

	*/
	const int number = 10;//数组大小
	int x;
	int count[number];//定义数组
	int i;
	for( i=0;i<number;i++){
		count[i] = 0;
	}//初始化

	scanf("%d",&x);
	while(x != -1){
		if ( 0 <= x && x <= 9){
			count[x]++;
		}
		scanf("%d",&x);
	}

	for(i=0;i<number;i++)
	{
		printf("%d:%d\n",i,count[i]);
	}//遍历

	return 0;
}