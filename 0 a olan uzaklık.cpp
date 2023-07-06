#include<stdio.h>
int main()
{
	int sayi1,sayi2,a,b;
	printf("Sayi 1 ve 2 yi giriniz: ");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(sayi1>0){
		a=sayi1;
	}
	else
	a=sayi1*-1;
	if(sayi2>0){
		b=sayi2;
	}
	else
	b=sayi2*-1;
	
	if(a<b){
		printf("%d",a);
	}
	else
	printf("%d",b);
	return 0;
}
