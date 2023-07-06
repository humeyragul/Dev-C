//Kullanýcýdan üç sayý isteyip ortanca deðerini bulan program
#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("Lutfen uc tamsayi giriniz: ");
  scanf("%d %d %d", &a, &b, &c);

  // Ortanca deðeri bulmak için deðerleri karþýlaþtýrýyoruz
  if ((a > b && a < c) || (a < b && a > c)) {
    printf("Ortanca deger: %d\n", a);
  } else if ((b > a && b < c) || (b < a && b > c)) {
    printf("Ortanca deger: %d\n", b);
  } else {
    printf("Ortanca deger: %d\n", c);
  }
N
  return 0;
}

