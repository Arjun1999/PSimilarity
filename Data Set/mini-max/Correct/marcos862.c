#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long long int summ=0;
    long long int maxn, minn;
    
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    maxn = minn = summ = summ = a[0];
    for(int i = 1; i < 5; i++){
        summ += a[i];
        //printf("a[%d] = %lld, summ = %lld, maxn = %lld, minn = %lld\n",i,a[i],summ,maxn,minn);
        if(a[i] > maxn) maxn = a[i];
        if(a[i] < minn) minn = a[i];
        //printf("a[%d] = %lld, summ = %lld, maxn = %lld, minn = %lld\n",i,a[i],summ,maxn,minn);
    }
    printf("%lld %lld", summ-maxn, summ-minn);
    return 0;
}
