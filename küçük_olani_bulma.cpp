#include <stdio.h>

int main() {
    int i;
    int min;
    int number;

    printf("Lutfen 3 sayi giriniz: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &number);

        if (i == 0 || number < min) {
            min = number;
        }
    }

    printf("En kucuk sayi: %d", min);

    return 0;
}

