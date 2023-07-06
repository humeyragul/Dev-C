//sýnav sorusu 2
#include<stdio.h>
int main()
{
	int sayi,i,j,k,ch='A';
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		for(j=1;j<=i;j++){
			printf("%d:",j);
		}
		for(k=0;k<sayi;k++){
			printf("%c\n",ch);
		}
		ch++;
		printf("\n");
	}
	return 0;
}
