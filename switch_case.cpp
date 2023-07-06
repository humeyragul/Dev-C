//switc case
#include<stdio.h>
int main()
{
	int cisim,kenar,kenar2,r;
	
	printf("Alanini bulmak istediginiz cismi giriniz: ");
	printf("\n1-Kare\n2-Dikdirtgen\n3-Daire\n");
	scanf("%d",&cisim);
	
	switch(cisim)
	{
		case 1:printf("Karenin kenarini giriniz: ");
		scanf("%d",&kenar);
		printf("Alan: %d",kenar*kenar);
		break;
		
		case 2:printf("Dikdörtgenin kenarlarini giriniz: ");
		scanf("%d%d",&kenar,&kenar2);
		printf("Alan: %d",kenar*kenar2);
		break;
		
		case 3:printf("Dairenin yericapini giriniz: ");
		scanf("%d",&r);
		printf("Alan: %.1f",(float)r*(float)r*3,14);
		break;
		
		default:
			printf("Gecerli islem giriniz");
	}
	return 0;
}
