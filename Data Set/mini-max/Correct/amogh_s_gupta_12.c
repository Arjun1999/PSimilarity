#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int a[5],min,max;
    for (i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for (j=0;j<5;j++)
    {for (i=0;i<4;i++)
        {  int temp;
       if (a[i]>a[i+1])
           {temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;}
        }    }
    for (i=0;i<5;i++)
        {
       if (i<4) 
           min+=a[i];
        if (i>0)
            max+=a[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
