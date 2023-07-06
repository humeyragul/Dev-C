#include <stdio.h>

int main() {
    float yaricap, cevre,pi=3.14;

    while(1) {
        printf("Dairenin yaricapini giriniz: ");
        scanf("%f", &yaricap);

        if (yaricap > 0) {
            cevre = 2 * PI * yaricap;
            printf("Dairenin cevresi: %f\n", cevre);
            break;
        } else {
            printf("Yaricap 0'dan kucuk ya da esit olamaz. Lutfen tekrar giriniz.\n");
        }
    }

    return 0;
}

