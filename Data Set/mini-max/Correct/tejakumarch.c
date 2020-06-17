#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    long long int a,b;
    for(int i=0;i<5;i++){long long int c=0;
        for(int j=0;j<5;j++){
            if(i==j){}
            else c=c+arr[j];
        }
                         if(i==0){a=c;b=c;}else if(c>a)a=c;else if(c<b)b=c;
    }
    printf("%lld %lld",b ,a);
    return 0;
}
