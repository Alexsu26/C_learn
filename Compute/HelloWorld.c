#include <stdio.h>

int main(void)
{
	 /*
		//输出 
		printf("12+34=%d\n",12+34);//%d被后面式子代替 

		//计算 
		int price = 0;//price为标识符，字母、数字、下划线 
  printf("请输入金额（元）");
  scanf("%d",&price);
  printf("找您%d元",100-price);
		
		//定义、赋值 
		int i=10,j;
		j = i + 10;
		printf("%d\n",j);

		//输入 
		int a=0,b=0;
		printf("请输入两个数：");
		scanf("%d %d",&a,&b);//d整数、f浮点数 
		printf("%d %d\n",a,b);
 	
 //常量 
 const int AMOUNT = 100;
 printf("%d\n",AMOUNT - price);
 
 */
 
 /*
 
 //浮点数
 printf("请输入身高的英尺和英寸：");
 double inch=0.0,foot=0.0;
 scanf("%lf %lf",&inch,&foot);//整数运算的结果只能是整数，，需要输入浮点数用%lf 
 printf("韬珮鏄�%f绫砛n",(inch+foot/12)*0.3048);//浮点数输出%f 
 
 //表达式——计算时间差 
 int hour1,min1;
 int hour2,min2;
 scanf("%d %d",&hour1,&min1);
 scanf("%d %d",&hour2,&min2);
 int t = hour2 * 60 + min2 - hour1 * 60 - min1;
 printf("相差%d小时%d分钟",t/60,t%60);
 
 */
 
 /* 
 //运算符优先级——求平均值 
 int a,b;
 printf("请输入求平均的两个数:");
 scanf("%d %d",&a,&b);
 double c = (a+b)/2.0;
 printf("%d和%d的平均值是%f\n",a,b,c);
		
 a = 6;
 b = 0;
 printf("%d",1+(b=a));
 
 */
 
 //交换ab
 int a=10,b=5,c=0;
 printf("a=%d,b=%d\n",a,b);
 c = b;
 b = a;
 a = c;
 printf("a=%d,b=%d\n",a,b);
 
 
 
 
 return 0;
}
