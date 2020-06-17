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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int arr[5]={a,b,c,d,e};
    long int sum[5]={0, 0, 0, 0, 0}, i, j;
    
    for(i=0;i<5;i++){
        for(j=0; j<5; j++){
            if(j!=i)
                sum[i]+=arr[j];
        }
    }
    long int smallest = sum[0], largest = sum[0];
    for(i=0; i<5; i++)
    {
        if(sum[i]<smallest)
            smallest = sum[i];
        
        if(sum[i]> largest)
            largest = sum[i];
    }
    
    printf("%lld %lld", smallest, largest);
    return 0;
}
