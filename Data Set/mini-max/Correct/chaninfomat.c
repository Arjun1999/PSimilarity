#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define MIN(x,y)   (x<y)?(x):(y)
#define MAX(x,y)   (x>y)?(x):(y)

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int arr[5];
    long long sum =0ll,min,max,diff;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++)
    {
        switch(i){
            case 0 : arr[i] = a;
                     break;
            case 1 : arr[i] = b;
                     break;
            case 2 : arr[i] = c;
                     break;
            case 3 : arr[i] = d;
                     break;
            case 4 : arr[i] = e;    
                     break;
        }
        sum += arr[i];
    }
    
    
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++)
    {
            diff = (sum - arr[i]);
            if( i==0 )
            {
                min = max = diff;    
            }
            else
            {
                min = MIN(min,diff);
                max = MAX(max,diff);
            }
    }
    
    printf("%lld %lld\n",min,max);
    
    return 0;
}
