#include<stdio.h>
int main()
{
	int yaricap,cevre;
	printf("yaricsp;:");
	scanf("%d",&yaricap);
	if(yaricap>0)
	{
		cevre=2*3.14*yaricap;
		printf("cevre=%d",cevre);
	}
	else{
		while(yaricap<0){
			printf("yaricsp;:");
	        scanf("%d",&yaricap);
		}
	}
	
}
