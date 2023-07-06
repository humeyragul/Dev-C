//sartlý cümleler a=x>y? x: y;(x y den büyük ise xE eþit deðil ise y)
#include<stdio.h>

int main()
{
	int x=5,y=8,a;
	
	a=x>y ? x: y;
	printf("%d",a);
	return 0;
}
