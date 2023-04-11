#include <stdio.h>
#include <stdlib.h>

int main()

   int n;
   int arr[n];
   int i;
     int j;
     int  position ;
      int swap;
     printf("Enter your array elements\n");
  scanf("%d", &n);

   for (n = 0; n < 10; n++){
     printf("Enter your array elements\n", n);
    scanf("%d", &arr[n]);}

   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);

}


