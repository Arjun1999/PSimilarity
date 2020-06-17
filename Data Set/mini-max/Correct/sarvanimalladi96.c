#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5],b[5],sum=0,temp;
    int i,j;
    for(i=0;i<5;i++)
            scanf("%lld",&a[i]);
    for(i=0;i<5;i++)
        {
            sum=0;
            for(j=0;j<5;j++)
               {
                    if(i!=j)
                            sum+=a[j];
            }
            b[i]=sum;
    }
    for(i=0;i<4;i++)
        {
            for(j=i+1;j<5;j++)
             {
                    if(b[i]>b[j])
                    {
                        temp=b[i];
                        b[i]=b[j];
                        b[j]=temp;
                    } 
            }
    }
    printf("%lld %lld",b[0],b[4]);
    return 0;
}
