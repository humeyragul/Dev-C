//pascal ��geni
#include<stdio.h>
int main()
{
	int satir,kat_sayi=1,bosluk,i,j;
	
	printf("Satir sayisini giriniz: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++) // D�� d�ng� "i" sat�r say�s� kadar �al��acakt�r.
	{
		for(bosluk=1;bosluk<=satir-i;bosluk++) // Her sat�rdaki bo�luklar�n say�s�
		{
			printf("  ");
		}
		for (j = 0; j <= i; j++) // O sat�rda bulunan kat say�lar i�in
		{
         if (j == 0 || i == 0)
            kat_sayi = 1;
         else
            kat_sayi = kat_sayi * (i - j + 1) / j; // Kat say�lar�n� hesaplama
         printf("%4d", kat_sayi);
        }
      printf("\n");
	}
	return 0;
}
