#include <stdio.h>

int main() {
    int sayi1, sayi2, i, ebob = 1;

    printf("L�tfen ilk say�y� girin:\n");
    scanf("%d", &sayi1);

    printf("L�tfen ikinci say�y� girin:\n");
    scanf("%d", &sayi2);

    for (i = 1; i <= sayi1 && i <= sayi2; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0) {
            ebob = i;

    }
}
printf("Ebob:%d",ebob);
return 0;
}

