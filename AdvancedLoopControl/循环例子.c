#include <stdio.h>

int main(int argc, char const *argv[])
{
	//log2x
	/*
	int x;
	int ret = 0;
	int c;

	scanf("%d",&x);
	c = x;

	while(x>1)
	{
		x /= 2;
		ret++;
	}

	printf("log2 of %d is %d\n",c,ret);
	*/
	
	//¼ÆÊıÑ­»·
	int count = 100;
	int num = 0;
	while( count >= 0) 
	{
		count--;
		printf("%d\n",count);
		num++;
	}
	
	printf("count = %d,num = %d\n",count,num);

	return 0;
}
