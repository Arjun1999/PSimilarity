#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*
int main() 
{
    int i,j,temp;
    long sum=0;
    unsigned long long int arr[5];
    unsigned long long int val[5];
    for(i = 0; i < 5; i++)
    {
       scanf("%lld",&arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
       sum = sum + arr[i];
    }
    for(i = 0; i < 5; i++)
    {
       val[i] = sum - arr[i];
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(val[j] < val[i])
                {
                temp = val[i];
                val[i] = val[j];
                val[j] = temp;
            }
        
        }
    }
    
    printf("%lld %lld",val[0],val[4]);
    return 0;
}
*/
int main(){
    unsigned long long int a[5],max,min,sum=0;
    int i;
    scanf("%lld",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    for(i=1;i<5;i++){
        scanf("%lld",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
