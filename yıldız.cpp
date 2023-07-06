//////yýldýzdan üçgen
////#include<stdio.h>
////int main(){
////	int i,n,j;
////	printf("satir sayisi giriniz: ");
////	scanf("%d",&n);
////	
////	for(i=1;i<=n;i++){
////		for(j=1;j<=i;j++){
////			printf("#");
////		}
////		printf("\n");
////	}
////	return 0;
////}
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("satir saysini giriniz: ");
//	scanf("%d",&n);
//	
//	for(i=n;i>=1;i--){
//		for(j=1;j<=i;j++){
//			printf("#");
//		}
//		printf("\n");
//	}
//}
#include <stdio.h>

int main() {
    int sayi, i, j;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = sayi - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

