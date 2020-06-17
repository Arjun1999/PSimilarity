#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    int arr[]={a,b,c,d,e};
    
    long long max = 0;
    long long min = LLONG_MAX;
    long long sum = 0;
    
    for(int i =0 ; i<5; i++)
    {
        for(int j =0 ; j<5; j++)
        {
            if(j!=i)
                sum+=arr[j];
        }
        if(sum>max)
            max=sum;
        if(sum<min)
            min=sum;
        sum = 0;
    }

    printf("%lld %lld\n", min, max);
    return 0;
}
