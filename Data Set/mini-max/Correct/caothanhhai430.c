#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long long min,max;
    for(int i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(int i=0;i<5;i++){
        long int s=0;
        for(int j=0;j<5;j++)
            if(j!=i)
                s+=a[j];
        if(i==0)
           min=max=s;
        else{
            if(min>s)
                min=s;
            if(max<s)
                max=s;
        }
    }
    printf("%lld %lld",min,max);
    
    return 0;
}
