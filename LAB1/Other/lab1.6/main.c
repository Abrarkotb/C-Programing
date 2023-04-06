#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;
   int sum ,sub,mult;
   float divid;
   printf("plaese enter your first num ");
   scanf("%d",&x);
   printf("plaese enter your second num ");
   scanf("%d",&y);
   sum = x+y;
   printf("sum=%d",sum);
   sub = x-y;
   printf("\n sub=%d",sub);
    mult = x*y;
   printf("\n mult=%d",mult);
   divid = x/y;
   printf("\n divid=%f",divid);
}
