#include<stdio.h>

int main()
{
	
	//级联和嵌套
	int a,b,c;
	int max;
	
	printf("请输入三个数：");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c)
			max = a;
		else
			max = c;
	}	
	else{
		if(b>c)
			max = b;
		else
			max = c;	
	}
	printf("max=%d",max);
	
	
	
	
	
	
	return 0;
}
