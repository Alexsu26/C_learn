#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[2][5] = {{0,1,2,3,4},{5,6,7,8,9}};//2行5列
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}