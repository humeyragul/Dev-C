//Güçlü sayi yazdirma
#include<stdio.h>
int main()
{
	int sayi,i,sum=0,fact,j,a,ilk;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	ilk=sayi;
	while(sayi>0){
	for(i=1;i<=sayi;i++)
	{
	fact=1;
	a=sayi%10;
	for(j=1;j<=a;j++)
	{
	fact*=j;
	}
	sum+=fact;
	sayi/=10;
	}
	}
	if(sum==ilk)
	{
	printf("%d guclu sayidir ",sum);
	}
	else
	printf("%d guclu sayi degildir",sum);
	sum=0;
	return 0;	
}

