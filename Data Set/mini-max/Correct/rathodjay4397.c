#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    long int min=0,max=0,t;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }

        }
    }
for(i=0;i<4;i++)
    {
        min+=a[i];
    }
    for(i=1;i<5;i++)
    {
        max+=a[i];
    }
    printf("%ld %ld",min,max);

    return 0;
}

