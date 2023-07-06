//İkilik tabanda sayıyı onluk tabana çevirme(chatgbt)
#include <stdio.h>

int main(void) {
    int sayi;
    printf("4 basamakli bir ikilik tabanda sayi giriniz: ");
    scanf("%d", &sayi);

    int onluk_taban = 0, a = 1;
    while (sayi > 0) {
        onluk_taban += (sayi % 10) * a;
        a *= 2;
        sayi /= 10;
    }

    printf("Girilen sayinin onluk tabandaki karsiligi: %d", onluk_taban);

    return 0;
}
