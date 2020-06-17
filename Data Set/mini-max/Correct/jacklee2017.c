#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long long int sum;
    
    long long int mini;
    long long int maxi;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    sum = mini = maxi =a[0];
    for(int i = 1; i < 5; i ++){
        sum += a[i];
        
        if(a[i] < mini){
            mini = a[i];
        }else if(a[i] > maxi){
            maxi = a[i];
        }
            
        
    }
    
    printf("%lld %lld\n",sum - maxi, sum - mini);
    return 0;
}
