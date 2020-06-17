#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int *a;
    a=malloc(sizeof(long long int)*5);
    for(int i=0;i<5;i++)
        scanf("%lld",a+i);
    for(int i=0;i<4;i++)
        {
           int min=i,temp;
            for(int j=i+1;j<5;j++)
                {
                    if(a[j]<a[min])
                        min=j;
            }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
   long long int x=a[0]+a[1]+a[2]+a[3];
   long long int  y=a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld",x,y);
    return 0;
}
