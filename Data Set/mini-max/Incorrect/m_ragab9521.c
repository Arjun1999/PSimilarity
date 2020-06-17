#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int ar[5];
long int ar1[5];
long int max_value;
long int min_value;


// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {


}

int main()
{
    int i,j;
    for(i=0;i<5;i++)
        scanf("%ld",&ar[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==i)
                ar1[i]+=0;
            else
                ar1[i]+=ar[j];
        }

    }
    for(i=0;i<5;i++)
    {
     //   printf(" %ld ",ar[i]);
    }
    printf("\n");
     for(i=0;i<5;i++)
    {
       // printf(" %ld ",ar1[i]);

    }
    printf("\n");
    max_value=ar1[0];
        for(i=0;i<5;i++)
    {
     if(ar1[i]>max_value)
     {
         max_value=ar1[i];
     }
    }
        min_value=ar1[0];
         for(i=0;i<5;i++)
        {
     if(ar1[i]<min_value)
     {
         min_value=ar1[i];

     }
    }
        printf("%ld ",min_value);

printf("%ld",max_value);

    return 0;
}
