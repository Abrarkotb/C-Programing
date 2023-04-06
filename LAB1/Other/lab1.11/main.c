#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int sum=0;
    do{
        printf("enter num");
        scanf("%d",&x);
        sum= sum+x;
    }
    while(sum<=100);
        printf("your sum exceeds 100.");
}
