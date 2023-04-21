#include <stdio.h>
#include <stdlib.h>
void swap_1 (int x, int y) {
    x=x+y;
    y= x-y;
    x=x-y;
   printf(" x=%d ,y=%d", x, y);
}

void swap_2 (int x, int y) {
     x=x*y;
    y= x/y;
    x=x/y;
   printf(" x=%d ,y=%d", x, y);

}
int main()
{
   int x ,y;
   printf("pleas , enter x= ");
   scanf("%d",&x);
    printf("pleas , enter second y= ");

   scanf("%d",&y);


   //swap_1(x, y);
   swap_2(x, y);
}
