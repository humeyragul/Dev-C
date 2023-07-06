//cümle ile string
#include<stdio.h>
int main()
{
	char dizi[100]="Hic gulemiyom";
	char cr;
	int i=0,aded=0;
	
	printf("Br karakter giriniz: ");
	scanf("%s",&cr);
	
	while(dizi[i]!='\0'){
		if(cr==dizi[i])
		aded++;
		i++;
	}
	if(aded!=0)
	printf("%d defa geciyor",aded);
	else
	printf("gecmiyor");
	return 0;
}

