#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int i,j,n,temp;
    long int sum=0,sum1=0;
    n=5;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=i;j<n;j++)
        {
        if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    
    for(j=1;j<n;j++)
        {
        sum+=a[j];
    }
    for(j=0;j<n-1;j++)
        sum1+=a[j];
    printf("%ld %ld",sum1,sum);
    return 0;
}
