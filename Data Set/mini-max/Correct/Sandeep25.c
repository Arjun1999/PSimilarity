#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int a[5],max=0,min=0,temp;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<4;i++)
        {
        for(j=0;j<4-i;j++)
            {
            if(a[j+1]<a[j])
                {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
        {
        min=min+a[i];
    }
    for(i=1;i<5;i++)
        {
        max=max+a[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
