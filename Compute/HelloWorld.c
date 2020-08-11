#include <stdio.h>

int main(void)
{
	 /*
		//Êä³ö 
		printf("12+34=%d\n",12+34);//%d±»ºóÃæÊ½×Ó´úÌæ 

		//¼ÆËã 
		int price = 0;//priceÎª±êÊ¶·û£¬×ÖÄ¸¡¢Êı×Ö¡¢ÏÂ»®Ïß 
  printf("ÇëÊäÈë½ğ¶î£¨Ôª£©");
  scanf("%d",&price);
  printf("ÕÒÄú%dÔª",100-price);
		
		//¶¨Òå¡¢¸³Öµ 
		int i=10,j;
		j = i + 10;
		printf("%d\n",j);

		//ÊäÈë 
		int a=0,b=0;
		printf("ÇëÊäÈëÁ½¸öÊı£º");
		scanf("%d %d",&a,&b);//dÕûÊı¡¢f¸¡µãÊı 
		printf("%d %d\n",a,b);
 	
 //³£Á¿ 
 const int AMOUNT = 100;
 printf("%d\n",AMOUNT - price);
 
 */
 
 /*
 
 //¸¡µãÊı
 printf("ÇëÊäÈëÉí¸ßµÄÓ¢³ßºÍÓ¢´ç£º");
 double inch=0.0,foot=0.0;
 scanf("%lf %lf",&inch,&foot);//ÕûÊıÔËËãµÄ½á¹ûÖ»ÄÜÊÇÕûÊı£¬£¬ĞèÒªÊäÈë¸¡µãÊıÓÃ%lf 
 printf("èº«é«˜æ˜¯%fç±³\n",(inch+foot/12)*0.3048);//¸¡µãÊıÊä³ö%f 
 
 //±í´ïÊ½¡ª¡ª¼ÆËãÊ±¼ä²î 
 int hour1,min1;
 int hour2,min2;
 scanf("%d %d",&hour1,&min1);
 scanf("%d %d",&hour2,&min2);
 int t = hour2 * 60 + min2 - hour1 * 60 - min1;
 printf("Ïà²î%dĞ¡Ê±%d·ÖÖÓ",t/60,t%60);
 
 */
 
 /* 
 //ÔËËã·ûÓÅÏÈ¼¶¡ª¡ªÇóÆ½¾ùÖµ 
 int a,b;
 printf("ÇëÊäÈëÇóÆ½¾ùµÄÁ½¸öÊı:");
 scanf("%d %d",&a,&b);
 double c = (a+b)/2.0;
 printf("%dºÍ%dµÄÆ½¾ùÖµÊÇ%f\n",a,b,c);
		
 a = 6;
 b = 0;
 printf("%d",1+(b=a));
 
 */
 
 //½»»»ab
 int a=10,b=5,c=0;
 printf("a=%d,b=%d\n",a,b);
 c = b;
 b = a;
 a = c;
 printf("a=%d,b=%d\n",a,b);
 
 
 
 
 return 0;
}
