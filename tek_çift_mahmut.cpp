#include <stdio.h>


int main() {


    int n, sayi, tek_toplam = 0, cift_toplam = 0, tek_sayac = 0, cift_sayac = 0;
    printf("Kac adet sayi gireceksiniz? ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        printf("%d. sayiyi giriniz: ", i);

        scanf("%d", &sayi);


        if (sayi % 2 == 0) {


            cift_sayac++;

            cift_toplam += sayi;


        } else {

            tek_sayac++;

            tek_toplam += sayi;


        }

    }

    printf("Girdiginiz %d sayidan %d tanesi tek sayidir.\n", n, tek_sayac);

    printf("Girdiginiz %d sayidan %d tanesi cift sayidir.\n", n, cift_sayac);

    printf("Tek sayilarin toplami: %d\n", tek_toplam);

    printf("Cift sayilarin toplami: %d\n", cift_toplam);

    return 0;

}
