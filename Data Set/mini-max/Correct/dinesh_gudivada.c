#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
long int i,sum1[5],a[5],sum=0;
    for(i=0;i<5;i++)
{
    scanf("%ld",&a[i]);
    sum=sum+a[i];   
}
    int arr[5];
    for(i=0;i<5;i++)
        sum1[i]=sum-a[i];
    long int max=sum1[0],min=sum1[0];
    for(i=0;i<5;i++)
{
            if(max < sum1[i])
                max = sum1[i];
        if(min > sum1[i])
            min = sum1[i];        
 }
    
    printf("%ld %ld",min ,max);
    return 0;

}

