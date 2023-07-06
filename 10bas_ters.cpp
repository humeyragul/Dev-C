#include<stdio.h>
int main()
{
	int a,i,b;
	printf("en fazla 10 basamakli sayi giriniz: ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		b=a%10;
		printf("%d",b);
		a=a/10;

	}
	return 0;
}
