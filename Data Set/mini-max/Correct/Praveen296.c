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
   long long int arr[5];
  long long int s=0;
 long long int k=0;
    long long int t;
    int i,j;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    for(i=0;i<4;i++)
        {
        for(j=0;j<5-i-1;j++)
            {
            if(arr[j]>arr[j+1])
                {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    for(i=0;i<4;i++)
        {
        s=s+arr[i];
    }
    for(i=1;i<5;i++)
        {
        k=k+arr[i];
    }
    printf("%lld %lld",s,k);
    return 0;
}
