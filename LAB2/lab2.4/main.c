#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char ch[10];

   printf("please enter s srting\n");
   gets(ch);

   strrev(ch);

   printf("your string is: %s \n", ch);

}
