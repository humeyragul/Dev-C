//kullanıcıdan yıl degeri alan ve bunun kaç saniye olduğunu hesaplayan program
#include<stdio.h>

int main()
{
	int a;
	
	printf("Yil degeri giriniz: ");
	scanf("%d",&a);
	
	int gun=365*a;
	int saat=gun*24;
	int saniye=(saat*3600)+(21600*a);
	
	printf("%d yil=%d",a,saniye);
	return 0;
}
