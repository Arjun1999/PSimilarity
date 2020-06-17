#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long  a; 
    long  b; 
    long  c; 
    long d;
    long  e;
        long big;
    long small;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[5];

        arr[0]=b+c+d+e;
        arr[1]=a+c+d+e;
        arr[2]=a+b+d+e;
        arr[3]=a+b+c+e;
        arr[4]=a+b+c+d;
    
    for(int i=0;i<5;i++)
        {
        if(arr[i]>big)
            big=arr[i];
    }
    small=arr[0];
     for(int i=1;i<5;i++)
        {
        if(arr[i]<small)
            small=arr[i];
    }
    
    printf("%ld %ld",small,big);
    return 0;
}
