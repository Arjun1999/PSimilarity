#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
 
    int i,j;
    long int max,min,t;
    for(i=0;i<=4;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<4;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(a[j]<a[i])
                {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    max=a[1]+a[2]+a[3]+a[4];
    min=a[0]+a[1]+a[2]+a[3];
    printf("%ld %ld",min,max);
    return 0;
}
