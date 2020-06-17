#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5];
    long long int max = 0; long long int min = 1000000000; long long int sum = 0;
    //long int b; 
    //long int c; 
    //long int d;
    //long int e;
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    for(int i = 0;i < 5; i++){
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
        //    maxin = i;
        }
        
        if(arr[i] < min){
            min = arr[i];
        //    minin = i;
        }
        
        
    }
    printf("%lld %lld",sum - max,sum - min);
    return 0;
}
