#include <stdio.h>
#include <stdbool.h>

int main(){
	bool a = true;
	bool b = false; 
	printf("a=%d\n",a);
	printf("!a=%d\n",!a);
	printf("a && b=%d\n",a&&b);
	printf("a||b=%d\n",a||b);
	
	
	//Ìõ¼þÔËËã·û
	int count=10;
	count = (count>20)? count-10:count+10;
	printf("%d\n",count); 
	
	//¶ººÅ
	printf("%d\n",(3+9,4+4));
	
	
	
	return 0;
} 
