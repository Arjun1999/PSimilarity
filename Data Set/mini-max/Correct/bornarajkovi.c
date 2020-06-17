#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5];
    long long max=-1,maxpoz,min=0xFFFFFFFF,minpoz;
    for(int i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
        if(a[i]>max)
            {
            max=a[i];
            maxpoz=i;
            }
        if(a[i]<min)
            {
            min=a[i];
            minpoz=i;
            }
        }
    long long summax=0,summin=0;
    for(int i=0;i<5;i++)
        {
        if(i!=maxpoz)
            summax+=a[i];
        if(i!=minpoz)
            summin+=a[i];
        }
    printf("%lld %lld",summax,summin);
    return 0;
}
