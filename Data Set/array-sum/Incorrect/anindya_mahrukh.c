#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int arraydigits;
    int array[10];
    int sum=0;
    scanf ("%d", &arraydigits);
    for (int i=0; i<arraydigits; i++)
    {
        scanf ("%d", &array[i]);
    }
    for (int j=0; j<arraydigits; j++)
    {
        sum= sum + array[j];

    }
printf ("%d", sum);
}