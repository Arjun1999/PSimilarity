#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    long long int max_sum=0;
    long long int min_sum=0;
    long long int tmp_sum=0;
    int i;
    int j;
    long long int array[5];
    scanf("%lld %lld %lld %lld %lld",&array[0],&array[1],&array[2],&array[3],&array[4]);
    
    for(i=0;i<5;i++)
    {
        tmp_sum = 0;
        for(j=0;j<5;j++)
        {
            if(j != i)
                tmp_sum += array[j];
        }
        if(tmp_sum > max_sum)
            max_sum = tmp_sum;
        
        if(min_sum == 0)
            min_sum = tmp_sum;
        
        if(tmp_sum < min_sum)
            min_sum = tmp_sum;
            
    }
    
    printf("%lld %lld",min_sum,max_sum);
    return 0;
}
