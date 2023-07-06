//cümle uzunlugu
#include<stdio.h>
int main()
{
	char dizi[100],i;
	printf("Bir cümle giriniz: ");
	scanf("%s",&dizi);
	
	for(i=0;dizi[i]!='\0';i++);
		printf("\nuzunluk: %d",i);
	return 0;
	
}
