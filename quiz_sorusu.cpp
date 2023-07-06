//quiz sorusu
#include<stdio.h>
int main()
{
	int i,satir,j,ch='A';
	
	printf("Satir: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++){
		for(j=0;j<satir-i;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("*");

		printf("%c",ch);
		ch++;
		printf("\n");
	}
}
