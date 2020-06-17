#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long int max,min,max_sum=0,min_sum=0;
    int max_ind,min_ind;
    max = min = a[0];
    for(int i=1;i<5;i++){
        if(max <= a[i]){
            max=a[i];
            max_ind=i;
        }
        if(min >= a[i]){
            min=a[i];
            min_ind=i;
        }
    }
    for(int i=0;i<5;i++){
        if(i!=max_ind){
            min_sum+=a[i];
        }
        if(i!=min_ind){
            max_sum+=a[i];
        }
    }
    printf("%lld %lld",min_sum,max_sum);
    return 0;
}
