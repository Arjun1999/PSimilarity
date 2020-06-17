#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int temp;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int arr[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0] = a+b+c+d;
    arr[1] = b+c+d+e;
    arr[2] = c+d+e+a;
    arr[3] = d+e+a+b;
    arr[4] = e+a+b+c;
    
    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
           {
            if( arr[j] > arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                } 
            }
     }
    printf("%ld %ld",arr[0],arr[4]);
    return 0;
}
