#include <stdio.h>

int main(void)
{
	 /*
		//��� 
		printf("12+34=%d\n",12+34);//%d������ʽ�Ӵ��� 

		//���� 
		int price = 0;//priceΪ��ʶ������ĸ�����֡��»��� 
  printf("�������Ԫ��");
  scanf("%d",&price);
  printf("����%dԪ",100-price);
		
		//���塢��ֵ 
		int i=10,j;
		j = i + 10;
		printf("%d\n",j);

		//���� 
		int a=0,b=0;
		printf("��������������");
		scanf("%d %d",&a,&b);//d������f������ 
		printf("%d %d\n",a,b);
 	
 //���� 
 const int AMOUNT = 100;
 printf("%d\n",AMOUNT - price);
 
 */
 
 /*
 
 //������
 printf("��������ߵ�Ӣ�ߺ�Ӣ�磺");
 double inch=0.0,foot=0.0;
 scanf("%lf %lf",&inch,&foot);//��������Ľ��ֻ��������������Ҫ���븡������%lf 
 printf("身高是%f米\n",(inch+foot/12)*0.3048);//���������%f 
 
 //���ʽ��������ʱ��� 
 int hour1,min1;
 int hour2,min2;
 scanf("%d %d",&hour1,&min1);
 scanf("%d %d",&hour2,&min2);
 int t = hour2 * 60 + min2 - hour1 * 60 - min1;
 printf("���%dСʱ%d����",t/60,t%60);
 
 */
 
 /* 
 //��������ȼ�������ƽ��ֵ 
 int a,b;
 printf("��������ƽ����������:");
 scanf("%d %d",&a,&b);
 double c = (a+b)/2.0;
 printf("%d��%d��ƽ��ֵ��%f\n",a,b,c);
		
 a = 6;
 b = 0;
 printf("%d",1+(b=a));
 
 */
 
 //����ab
 int a=10,b=5,c=0;
 printf("a=%d,b=%d\n",a,b);
 c = b;
 b = a;
 a = c;
 printf("a=%d,b=%d\n",a,b);
 
 
 
 
 return 0;
}
