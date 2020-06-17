#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


    int main() {
    int ar[5],s,l,i;
    long int sum=0;
    s=ar[0];
    l=ar[0];
    for(i = 0; i < 5; i++){
       scanf("%d",&ar[i]);
       
        if(s>ar[i])
            s=ar[i];
        if(l<ar[i])
            l=ar[i];
        sum=sum+ar[i];
    }
    printf("%ld %ld",sum-l,sum-s);
    return 0;
    // Complete this function
}

