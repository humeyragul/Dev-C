#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++){
		printf("%d:",i);
		for(int j='A';j<'A'+i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
