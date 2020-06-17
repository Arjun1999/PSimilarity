#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int cmpfun(const void *a,const void *b)
    {
    return (*(long long int*)a-*(long long int*)b);
}
int main()
{
    long long int a[7],i,l=0,k=0; 
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
    qsort(a,5,sizeof(long long int),cmpfun);
    for(i=0;i<4;i++)
        k=k+a[i];
    for(i=1;i<5;i++)
        l=l+a[i];
    printf("%lld %lld",k,l);
    return 0;
}
