#include<stdio.h>

int toplam_fonksiyonu(int x,int y);
int main()
{
	int x,y,z;
	printf("1.sayiyi girin: ");
	scanf("%d",&x);
	
	printf("2.sayiyi girin: ");
	scanf("%d",&y);
	
	z=toplam_fonksiyonu(x,y);//; koyuyorum çünkü fonksiyon için yer açýyorum hafýzada
	printf("Toplam degeri: %d",z);
	
	return 0;
}
int toplam_fonksiyonu(int %d\n", toplam);
 x,int y)
{
	int sonuc;
	sonuc=x+y;
	return sonuc;
}
/*
#include <stdio.h>

int toplama(int a, int b) {
    int sonuc = a + b;
    return sonuc;
}

int main() {
    int sayi1 = 5;
    int sayi2 = 3;
    int toplam = toplama(sayi1, sayi2);
    printf("Toplam:
    return 0;
}
*/
