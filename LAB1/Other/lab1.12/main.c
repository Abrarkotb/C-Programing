#include <stdio.h>
#include <stdlib.h>

int main()
{
  for(int x=1; x<=10; x++){
       printf("tableof:%d",x);
  for (int i = 1; i <= 10; i++) {
  printf("%d* %d = %d \n", x, i, x * i);
  }
  }
  return 0;
}
