#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[14]={},i,n,key;
    int max = 0;
    int counter = 0;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key : ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {

            while (a[i]==key)
            {

                counter++;
                i++;
            }
            if(counter > max)
            {
                max = counter;
            }
            counter=0;

        }
    }
            printf("your result is: %d",max);

}



