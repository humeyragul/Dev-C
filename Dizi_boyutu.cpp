#include <stdio.h>

int main(void) {
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int size;

size = sizeof(arr) / sizeof(arr[0]);//dizinin boyutunu veren yapý
printf("Dizinin eleman sayisi: %d\n", size);

return 0;
}
