#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a[5],sum1=0,sum2=0,temp;
    for(int i=0;i<5;i++)
    { scanf("%lld",&a[i]);
        sum2+=a[i];
    }
    for(int i=0;i<5;i++)
        {
        for(int j=i+1;j<5;j++)
            {
            if(a[i]>a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    sum1=a[0]+a[1]+a[2]+a[3];
    sum2-=a[0];
    printf("%lld %lld",sum1,sum2);
    return 0;
}
