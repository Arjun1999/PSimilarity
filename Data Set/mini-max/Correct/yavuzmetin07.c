#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int arr[5];
    for(int i = 0; i < 5; i++){
       scanf("%lld",&arr[i]);
    }
    
    for(int j = 0; j < 5; j++)
    {
        for(int k = 0; k < 4-j; k++)
        {
            if(arr[k]>arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1] ;
                arr[k+1] = temp;
            }
        }
    }
    
    long long int maximal = arr[0]+arr[1]+arr[2]+arr[3];
    long long int minimal = arr[1]+arr[2]+arr[3]+arr[4];
    
    printf("%lld %lld",maximal,minimal);
    
    return 0;
}
