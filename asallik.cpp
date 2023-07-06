#include<stdio.h>
int main()
{
	int sayi,asal;
	printf("Bir sayi gir: ");
	scanf("%d",&sayi);
	
	for(int i=2;i<sayi;i++){
		if(sayi%i==0){
			asal=0;
			break;
		}
		else
		asal=1;
	}
	if(asal==1){
	printf("%d sayisi asaldir",sayi);
}
	else
	printf("%d sayisi asal degildir",sayi);
	
}
