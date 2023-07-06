//pascal üçgeni
#include<stdio.h>
int main()
{
	int satir,kat_sayi=1,bosluk,i,j;
	
	printf("Satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++) // Dýþ döngü "i" satýr sayýsý kadar çalýþacaktýr.
	{
		for(bosluk=1;bosluk<=satir-i;bosluk++) // Her satýrdaki boþluklarýn sayýsý
		{
			printf("  ");
		}
		for (j = 0; j <= i; j++) // O satýrda bulunan kat sayýlar için
		{
         if (j == 0 || i == 0)
            kat_sayi = 1;
         else
            kat_sayi = kat_sayi * (i - j + 1) / j; // Kat sayýlarýný hesaplama
         printf("%4d", kat_sayi);
        }
      printf("\n");
	}
	return 0;
}
