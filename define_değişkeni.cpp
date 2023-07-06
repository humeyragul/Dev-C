//sabit veri tipleri  #define
#include<stdio.h>
#define PI 3.14159

int main(void) {
  
  int r;
  printf("PI=%f\n",PI);
  
  printf("dairenin yaricapini giriniz: ");
  scanf("%d",&r);
  
  printf("dairenin alani:%f",PI*(float)r*(float)r);
 

  return 0;
}
