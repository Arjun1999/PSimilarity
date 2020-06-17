#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int a[5];
    long int sum =0, min, max;
    for(int i=0; i<5; i++)
        {
        scanf("%ld",&a[i]);
        sum =sum + a[i];
        }
    min =a[0];
       for(int j=0; j<5; j++)
           {
           if(a[j]<min)
               min = a[j];
         }
    max = a[0];
    for(int k =0; k<5; k++)
        {
        if(a[k]>max)
            max= a[k];
        }
    printf("%ld %ld",sum-max, sum-min);
    return 0;
}
