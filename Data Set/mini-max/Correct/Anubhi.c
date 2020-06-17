#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a,max=0,min=0; 
   long int b,c,d,e;
    long int arr[5];
    int i=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    for(i=0;i<2;i++){
    arr[i]=a+b+c+d;
    arr[i+1]=a+b+c+e;
    arr[i+2]=a+b+d+e;
    arr[i+3]=a+c+d+e;
    arr[i+4]=b+c+d+e;
        break;
    }
    min=arr[0];
    for(i=0;i<5;i++)
        {
        if(arr[i]>max)
            {
            max=arr[i];
       }
        if(arr[i]<min)
            {
            min=arr[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
