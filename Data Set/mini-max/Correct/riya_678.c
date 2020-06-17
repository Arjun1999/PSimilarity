#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],grt=0,sm=0;
   long int min=0,max=0;
       int i;
    for (i=0;i<5;i++){
    scanf("%ld",&a[i]);
        if (a[i]>a[grt]){
          grt=i;
        }
    }
    for (i=1;i<5;i++)
        if (a[sm]>a[i])
        {
        sm=i;   
    }
    for (i=0;i<5;i++){
        if(i!=grt)
            min+=a[i];
        if (i!=sm)
            max+=a[i];
    }
    printf ("%ld %ld",min,max);
    return 0;
}
