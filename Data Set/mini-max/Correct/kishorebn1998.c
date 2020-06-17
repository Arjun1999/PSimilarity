#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int i,j,ar[5],temp,min,max;
    for(i=0;i<5;i++)
        scanf("%ld",&ar[i]);
    for(j=1;j<5;j++)
    {for(i=0;i<5-j;i++)
    { if(ar[i]>=ar[i+1])
    {temp=ar[i];
    ar[i]=ar[i+1];
    ar[i+1]=temp;}}}
    max=0;
    for(i=1;i<5;i++)
    {max=max+ar[i];}
    min=0;
    for(i=0;i<4;i++)
    {min=min+ar[i];}
printf("%ld %ld",min,max);
}
