#include <stdio.h>
int main(){
	
	
	//while
	/* 
	int x;
	int n=0;
	printf("���������֣�"); 
	scanf("%d",&x);
	int y = x;
	
	n++;
	x /= 10;
	while( x>0 ){
		n++;
		x /= 10;
	}
	
	printf("%d��%dλ��\n",y,n);
	
	*/
	
	//do while
	/*
	int x,n=0;
	scanf("%d",&x);
//	while (x>0){
//		x /= 10;
//		n++;
//}
	do{
		printf("in loop\n");
		x /= 10;
		n++;
		printf("x=%d,n=%d\n",x,n);
	}while(x>0);
	
	printf("%d\n",n);
	*/
	
	//for
	
	/*
	int n,factor=1;
	printf("input n:");
	scanf("%d",&n);
	int i = 1;
	
	
	for(i=1;i<=n;i++){
		factor *= i;
	}
	printf("result:%d\n",factor);
	
	*/
	int i=0,sum=0;
	for (i=0;i<=5;i++){
		sum += i;
		printf("sum=%d i=%d\n",sum,i);
	}
	sum = 0;
	for (i=0;i<=5;++i){
		sum += i;
		printf("sum=%d i=%d\n",sum,i);
	}


	return 0;
}
