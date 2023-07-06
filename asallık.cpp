#include<stdio.h>
int main(){

int sayi, i = 2, asal = 1;
printf("Lutfen bir sayi giriniz: ");
scanf("%d", &sayi);
while (i <= sayi / 2) {
    if (sayi % i == 0) {
        asal = 0;
        break;
    }
    i++;
}
if (asal == 1) {
    printf("%d sayisi asaldir.\n", sayi);
} else {
    printf("%d sayisi asal degildir.\n", sayi);
}
}
