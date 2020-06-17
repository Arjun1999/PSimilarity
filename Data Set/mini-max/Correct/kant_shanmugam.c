#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5], d=0,max ,min ; int i;
    for(i=0;i<5;i++)
        {scanf("%lli",&a[i]);}
     for(i=0;i<5;i++)
        {d=a[i]+d;}
    min=a[0]; for(i=1;i<5;i++)
        {if(a[i]<min)
        min=a[i];}
    max=a[0]; for(i=1;i<5;i++)
        {if(a[i]>max)
        max=a[i];}
    printf("%lli %lli",d-max,d-min);
    return 0;
}
