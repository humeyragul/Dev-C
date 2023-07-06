//harf ters üçgen
#include<stdio.h>
int main()
{
	int satir,i,j,ch='A';
	printf("SAtir: ");
	scanf("%d",&satir);
	
	for(i=0;i<satir;i++){
		for(j=0;j<satir-i;j++){
			printf("%c",ch);
			
		}ch++;
		printf("\n");
	}
	return 0;
}
