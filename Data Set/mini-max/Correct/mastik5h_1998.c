#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define LOOP(x) for(i=0;i<x;i++)
int comp(const void *p,const void *q)
{
    if(*((LL*)p)>*((LL*)q))
        return 1;
    if(*((LL*)p)<*((LL*)q))
        return -1;
    return 0;
}
int main()
{
    LL arr[5],min=0;
    LL max=0;
    int i;
    LOOP(5)
        scanf("%lld", &arr[i]);
    qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),comp);
    LOOP(4)
    {
        min+=arr[i];
        max+=arr[i+1];
    }
    printf("%lld %lld",min,max);
}
