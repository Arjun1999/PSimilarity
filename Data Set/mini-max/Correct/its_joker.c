#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int a[5];
    int j;
    for(j=0;j<5;++j)
    scanf("%lld",&a[j]);
   long long int min=a[0],max=a[0];
   long long int sum=0;
    for(j=0;j<5;++j)
        sum=sum+a[j];
int i;
    for(i=0;i<5;++i)
        if(max<a[i])
        max=a[i];
        
    for(i=0;i<5;++i)
        if(min>a[i])
        min=a[i];
        printf("%lld %lld",sum-max,sum-min);
    return 0;
}
