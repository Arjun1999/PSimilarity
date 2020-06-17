#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    */
    long long int array[5];
    long long int sum[5];
    long long int max =0;
   
    for(int i = 0;i<5;i++)
        {
            scanf("%lld", &array[i]);
    }
    sum[0] = array[1] + array[2] + array[3] + array[4];
    sum[1] = array[0] + array[2] + array[3] + array[4];
    sum[2] = array[0] + array[1] + array[3] + array[4];
    sum[3] = array[0] + array[2] + array[1] + array[4];
    sum[4] = array[0] + array[2] + array[3] + array[1];
     long long int min =sum[0];
    for(int i = 0;i<5;i++)
        {
            if(max < sum[i])
                {
                max = sum[i];
            }
    }
     for(int i = 0;i<5;i++)
        {
            if(min > sum[i])
                {
                min = sum[i];
            }
    }
    printf("%lld %lld",min,max);
    return 0;
}
