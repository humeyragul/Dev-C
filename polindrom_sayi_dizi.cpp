//dizi polindrom mu degil mi bak
#include<stdio.h>
int main()
{
	int i,a[4]={1,2,2,1},j=0,b=3;
	
	for(i=0;i<4;i++)
	{
		if(a[i]==a[b]){
		j++;}
		b--;
		if(j==2)
		break;
	}
	if(j==2)
	printf("polindrom");
	else
	printf("polindrom degil");
	
	
	return 0;
}

