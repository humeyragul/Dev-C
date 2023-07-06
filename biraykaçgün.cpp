#include <stdio.h>

int main() {
    int ay, gun;

    printf("Lutfen ay numarasini girin (1-12):\n");
    scanf("%d", &ay);

    switch (ay) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            gun = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            gun = 30;
            break;
        case 2:
            gun = 28;
            break;
        default:
            printf("Geçersiz bir ay numarasi girdiniz.\n");
            return 0;
    }

    printf("%d. ay %d gun ceker.\n", ay, gun);

    return 0;
}

