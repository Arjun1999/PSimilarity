#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,b,c,d,e; 
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int arr[5];
    arr[0]=b+c+d+e;
    arr[1]=a+c+d+e;
    arr[2]=a+b+d+e;
    arr[3]=a+b+c+e;
    arr[4]=a+b+c+d;
    int i;
    long int minsum=arr[0], maxsum=arr[0];
    for (i=0;i<5;i++){
        if (arr[i]<minsum){
            minsum = arr[i];
        }
        if (arr[i]>maxsum){
            maxsum = arr[i];
        }
    }
    
    printf("%lld %lld",minsum, maxsum);
        
        
    return 0;
}
