//Kullanýcýdan dizi sayisini isteyen ve bunu ekrana yazdýran program
#include<stdio.h>
int main()
{
	int dizi[10];
	int i,sayi,eleman,sum=0;
	
	printf("Dizi eleman sayisini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d.elemani: ",i+1);
		scanf("%d",&eleman);
		sum=sum+eleman;
	}
	printf("Dizinin ortalamasi:%f",(float)sum/(float)sayi);
	
}
