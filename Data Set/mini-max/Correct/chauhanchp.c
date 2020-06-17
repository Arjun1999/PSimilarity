#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int n=5,a[5],temp,sum=0;
    int i,j;
    for(i=0;i<5;i++)
        {
    scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
         if(a[i]>a[j])
             {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
        }
    }
    for(i=0;i<n-1;i++)
        {
        sum=sum+a[i];
    }
    printf("%lld ",sum);
    sum=0;
    for(i=1;i<n;i++)
        {
        sum=sum+a[i];
    }
    printf("%lld",sum);
    
    return 0;
}
