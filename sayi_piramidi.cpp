//sayi piramidi
#include <stdio.h>
int main() {
   int i, j, satir;
   printf("satir: ");
   scanf("%d", &satir);
   for (i = 1; i <= satir; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}

