#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int sum=0,sum1=0;
    long int t;
    long int array[5];
    for(int i = 0; i < 5; i++)
        {
    scanf("%lld",&array[i]);
    }
    for(int i = 0; i < 4; i++)
        {
        for(int j = 0; j < 5-i-1; j++)
            {
            if(array[j] > array[j+1])
                {
               t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
              
            }
        }
    }
    for(int i = 0; i < 4; i++)
        {
       sum+=array[i];
    }
    for(int i = 0; i < 5; i++)
        {
        for(int j = i+1; j < 5; j++)
            {
if(array[i] < array[j])
        {
    t = array[i];
    array[i] = array[j];
    array[j] = t;
}}
    }
    for(int i= 0; i < 4; i++)
        {
        sum1+=array[i];
    }
    printf("%1ld %1ld",sum,sum1);
    return 0;
}
