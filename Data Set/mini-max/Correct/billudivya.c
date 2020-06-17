#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
    long int a[5];
    int i;
    for(i=0;i<5;i++) {scanf("%ld",&a[i]);}
    qsort(a, 5, sizeof(long int), cmpfunc);
    
    long int min=0,max=0;
    for(i=0;i<4;i++)
        {
        min+=a[i];
        max+=a[i+1];
    }
    printf("%ld %ld\n",min,max);
    return 0;
}
