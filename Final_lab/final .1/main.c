#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse(char str[]){
      char *ret = malloc(strlen(str));
      int j =0;
    for (int i=strlen(str)-1; i>=0 ; i-- ){
       ret[j]= str[i];
       j++;
    }
    return ret;
   }

int main()
{
    char str[256];
    printf("Enter a string : ");
   gets(str);
   printf("%s", reverse(str));

   return 0;
}
