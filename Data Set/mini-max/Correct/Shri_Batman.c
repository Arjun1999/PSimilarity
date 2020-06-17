#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],sums[5];
        int i,j;
    for(i =0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    long int sum;
    long int temp;

    for(i=0;i<5;i++)
        {sum = 0;
        for(j=0;j<5;j++)
            {
            if(j!=i)
                {
                sum = sum + a[j];  
            }
        }
        sums[i] = sum;
    }
    for(i=0;i<4;i++)
        {
        for(j=0;j<4-i;j++)
            {
           if(sums[j+1]<sums[j])
               {
               temp = sums[j];
               sums[j] = sums[j+1];
               sums[j+1] = temp;
           }
        }
    }
    printf("%ld %ld",sums[0],sums[4]);
    return 0;
    
}
