//ters yan üçgen
#include<stdio.h>
int main()
{
	int satir,i,j,k;
	
	printf("SAtir: ");
	scanf("%d",&satir);
	
	for(i=0;i<=satir;i++){
		for(j=0;j<satir-i;j++){
			printf(" ");
		}
		for(k=0;k<i;k++){
			printf("*");
		}
		printf("\n");
	}
	satir=satir-1;
	for(i=1;i<=satir;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=i;k<=satir;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
