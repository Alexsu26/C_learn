//整数的分解
#include <stdio.h>
int main()
{
	//逆序
	int x;
	scanf("%d",&x);
	
	int digit;
	int ret = 0; 
	
	while( x > 0){
		digit = x%10;
		printf("%d",digit);	
		ret = ret * 10 + digit;
	//	printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
		x /= 10;
	}
	//printf("%d\n",ret);
	return 0;
 } 
