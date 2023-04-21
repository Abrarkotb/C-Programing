#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char * reverse(char str1[], char str2[]){
     char* sum = malloc(strlen(str1));
     int j =0;
    for (int i=0; i<strlen(str1) ; i++){
        sum[j] = str1[i];
        j++;
    }
     for (int i=0; i<strlen(str2) ; i++){
          sum[j] = str2[i];
          j++;
    }
    return sum;
       }
int main()
{
    char str1[256], str2[256];
    printf("Enter first string : ");
   gets(str1);
    printf("Enter second string : ");
   gets(str2);
   printf("%s", reverse(str1,str2));

   return 0;

}
