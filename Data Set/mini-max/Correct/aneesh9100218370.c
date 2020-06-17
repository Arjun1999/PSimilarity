#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,number[5],j;
        long a,min=0,max=0;
 
    for(i=0;i<5;i++)
        scanf("%d",&number[i]);
   
       for (i = 0; i < 5; i++)

    {

        for (j = i + 1; j < 5; j++)

        {

            if (number[i] > number[j])

            {

                a =  number[i];

                number[i] = number[j];

                number[j] = a;

            }

        }}
    for(i=0;i<4;i++)
        max=max+number[i];
    printf("%ld ",max);
            for(i=1;i<5;i++)
        min=min+number[i];
    printf("%ld",min);
   
    return 0;
}
