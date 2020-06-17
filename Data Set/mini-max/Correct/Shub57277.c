#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],max;
    int i,j;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(a[i]>a[j])
               { max=a[i];
            a[i]=a[j];
            a[j]=max;
               }
        }
    }
    printf("%ld %ld",a[0]+a[1]+a[2]+a[3],a[1]+a[2]+a[3]+a[4]);
    return 0;
}
