#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int arr[5] = {a,b,c,d,e};
    long long int min=a, max=a, sum=a;
    
    for(int i=1;i<5;i++)
        {
        if (min>arr[i])
        min = arr[i];
        if (max<arr[i])
        max = arr[i];
        sum = sum + arr[i];
    }
    
    printf("%lld %lld",(sum-max), (sum-min));
        
    return 0;
}
