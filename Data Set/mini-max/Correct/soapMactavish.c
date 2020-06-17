#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int max = 0,min = 100000000000000000;
    long long int sum = 0,Msum = 0,msum = 0;
    long long int arr[5];
    for(int i=1;i<=5;i++)
        {
        scanf("%lld",&arr[i]);
            if(max < arr[i])
            {
        
            max = arr[i];
         }
            if(min > arr[i])
            {
            min = arr[i];
        }
    }
        for(int j=1;j<=5;j++)
            {
            sum += arr[j]; 
        }
    Msum = sum - min;
    msum = sum - max;
     printf("%lld %lld",msum,Msum);
    return 0;
}
