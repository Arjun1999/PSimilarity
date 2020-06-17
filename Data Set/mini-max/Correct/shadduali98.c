#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],temp,max=0,min=0;
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
            {
                if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
            }
    }
    for(i=0;i<4;i++)
        {
            max+=a[i];
        }  
    for(i=4;i>0;i--)
        {
            min+=a[i];
        }
    printf("%ld %ld",min,max);
    return 0;
}
