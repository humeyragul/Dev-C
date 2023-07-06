#include <stdio.h>

int main()
{
    char original_string[] = "Merhaba Dunya";
    int length = 0;
    while(original_string[length] != '\0') {
        length++;
    }

    char reversed_string[length+1];

    for(int i=0; i<length; i++) {
        reversed_string[i] = original_string[length-i-1];
    }
    reversed_string[length] = '\0';

    printf("Orijinal Dizi: %s\n", original_string);
    printf("Ters Dizi: %s\n", reversed_string);

    return 0;
}

