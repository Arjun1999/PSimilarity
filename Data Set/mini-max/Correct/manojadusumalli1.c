#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
   long int a[5],max=0,min=0,t;
    int i,j;
    for(i=0;i<=5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
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
        max=max+a[i];
    for(i=1;i<5;i++)
        min=min+a[i];
    printf("%ld %ld",min,max);
    return 0;
}