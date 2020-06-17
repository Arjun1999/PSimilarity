#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],i,j,max,min,s; 
    scanf("%lld",&a[0]);
    s=max=min=a[0];
    
    for(i=1;i<5;i++)
        {
        scanf("%lld",&a[i]);
        if(max<a[i])
            max=a[i];
        else if(min>a[i])
            min=a[i];
            s=s+a[i];
    }
    printf("%lld %lld",s-max,s-min);
    return 0;
}
