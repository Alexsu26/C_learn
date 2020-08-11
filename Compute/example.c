#include <stdio.h>
int main(){
	int s;
	scanf("%d",&s); 
	int a,b,c;
	a = s/100;
	b = s%10;
	c = s/10;
	c = c%10;
	printf("%d\n",a+b*100+c*10);
	
	return 0;
}
