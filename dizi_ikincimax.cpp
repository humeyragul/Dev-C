//dizinin en b�y�k ikinci eleman�
#include <stdio.h>

int main()
{
    int i,max,iki;
    int arr[4]={1,2,3,4};

    for(i =0; i < 4; i++)
    {
       if(i==0||arr[i]>max) 
       {
         max=arr[i];
       }
       for(i=0;i<3;i++)
       {
       	if(i==0||arr[i]>iki)
       	iki=arr[i];
	   }
          
    }
    printf("ikinci b�y�k eleman:%d",iki);

    return 0;
}
