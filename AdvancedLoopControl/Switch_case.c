#include <stdio.h>
#include <math.h>
#include <stdlib.h>//用math时还需要用stdlib.h
int main()
{
	int type,n;
	
	scanf("%d",&type);
	n = type/abs(type);
	switch( n )//switch(控制表达式) 
	{
		case 1: 
			printf("%d\n",n);
			//没有break就继续，知道遇到break 
		case 2:
			printf("%d\n",n);
			break;
		case 3:
			printf("%d\n",n);
			break;
		case 4:
			printf("%d\n",n);
			break;
		default:
			printf("%d\n",n);
			break;
	}
	//控制表达式只能是整数， case后可用表达式 
	return 0;
}
