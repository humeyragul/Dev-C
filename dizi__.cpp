//dizinin iki elemanýnýn çarpýmý yeni bir dizi
#include<stdio.h>
int main()
{
	int a[6]={1,2,3,4,5,6},i;
	
	printf("son dizi: 2 ");
	
	for(i=1;i<5;i++){
	a[i]=a[i-1]*a[i+1];
	printf("%d ",a[i]);
}
printf("30");
return 0;
}
