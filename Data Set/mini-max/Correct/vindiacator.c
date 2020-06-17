#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long long int foursum[5],max=0,min=0;
    int i,j;
    for(i=0;i<5;i++)
        foursum[i]=0;
    scanf("%lld %lld %lld %lld %lld",&a[0], &a[1], &a[2], &a[3], &a[4]);
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            if(i!=j)
                foursum[i]+=a[j];
    }
    for(i=0;i<5;i++){
        if(foursum[i]>max)
            max=foursum[i];
    }
    min=max;
    for(i=0;i<5;i++){
        if(foursum[i]<min)
            min=foursum[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
