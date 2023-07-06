#include <stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    float cevre, alan;
    printf("Ucgenin kenar uzunluklarini girin:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    // a, b ve c'nin sýrayla çift olarak birbirleriyle karþýlaþtýrýlmasý
    for (int i = 1; i <= 3; i++) {
        for (int j = i + 1; j <= 3; j++) {
            if (i == 1 && j == 2) {
                if (a > b) {
                    float temp = a;
                    a = b;
                    b = temp;
                }
            } else if (i == 1 && j == 3) {
                if (a > c) {
                    float temp = a;
                    a = c;
                    c = temp;
                }
            } else if (i == 2 && j == 3) {
                if (b > c) {
                    float temp = b;
                    b = c;
                    c = temp;
                }
            }
        }
    }
    
    // üçgenin varlýðýnýn kontrolü
    if (a + b > c) {
        cevre = a + b + c;
        float u = cevre / 2.0;
        alan = sqrt(u * (u-a) * (u-b) * (u-c));
        printf("Ucgenin cevresi: %f\n", cevre);
        printf("Ucgenin alani: %f\n", alan);
    } else {
        printf("Girilen degerlerle bir ucgen olusturulamaz.\n");
    }
    return 0;
}

