#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int min;
    int max;
    for(int i=0 ; i<7 ;i++){
        printf("please enter number %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
   for(int i=0; i<7 ;i++){
     if(min>arr[i])
      min=arr[i];
       }
    printf("your min num is: %d \n",min);
    for(int i=0; i<7 ;i++){
     if(max<arr[i])
      max=arr[i];
       }
    printf("your max num is: %d \n",max);

}

