#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long long int s=0;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long int min=a[0],max=a[0];
    int i;
    for(i=0;i<5;i++)
        {
        s=s+a[i];
        if(min>a[i])
            min=a[i];
        else if(max<a[i])
            max=a[i];
    }
   // printf("%ld %ld\n",max,min);
    printf("%lld %lld",s-max,s-min);
    return 0;
}
