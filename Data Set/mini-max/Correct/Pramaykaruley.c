#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5],s[5],sum;
    int i,j;
    for(i=0;i<5;i++){
    scanf("%lld",&arr[i]);
    }
    
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<5;j++){
            if(i!=j){
                sum += arr[j];
            }
        }
        s[i] = sum;
    }
    long long int min=10000000000000000,max=0;
    for(i=0;i<5;i++){
        if(min > s[i]){
            min = s[i];
        }
        if(max<s[i]){
            max= s[i];
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}
