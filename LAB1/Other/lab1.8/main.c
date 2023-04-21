#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("please enter fir num");
    scanf("%d",&x);
    printf("please enter seco num");
    scanf("%d",&y);
    printf("please enter third num");
    scanf("%d",&z);

    if(x>y && x>z)
     printf("largest num is:%d\n",x);

    else if(y>x && y>z)
    printf("largest num is:%d\n",y);

    else
    printf("largest num is:%d\n",z);

     return 0;

}
