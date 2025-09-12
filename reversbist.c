#include<stdio.h>
int main()
{
	int num=0x3ABC29A4;
      	int t1=0xFF000000;
	int t2=0x00FF0000;
	int t3=0x0000FF00;
	int t4=0x000000FF;
	int m1=t1&num;
	int m2=t2&num;
	int m3=t3&num;
	int m4=t4&num;
	m1=((m1<<4)|(m1>>4))&t1;
	printf("\n%x",m1);	
	m2=m2& (0x00AA0000);
	printf("\n%x",m2);
	m3=(((m3<<1)&0x0000AA00)|((m3>>1)&0x00005500));
	printf("\n%x",m3);
	m4=((0x000000FF)^m4);
	printf("\n%x",m4);
	printf("\n%x",(m1|m2|m3|m4));
}
