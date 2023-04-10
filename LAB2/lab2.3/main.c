#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    int arr[s];
    int x;
    int cup;

   printf("please enter the size of arry %d \n");
   scanf("%d",&s);

    for(int i=0 ; i<s ;i++){
        printf("please enter number %d \n",i+1);
        scanf("%d",&arr[i]);
    }


   for(int i=0 ; i<s ;i++){
    for(x=i+1 ; x<s ; x++){
        if(arr[i] > arr[x]){
             cup =arr[i];
             arr[i] =arr[x];
             arr[x] =cup;
          }
          }
    }
    printf("your second  largest Num is: %d \n",arr[s-2]);

}

