#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n=5;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld ",&a[i]);
    }
    long int b[n];
    long int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum=sum+a[j];
            }
           
        }
         b[i]=sum;
            sum=0;
    }
    long int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    
    
    printf("%ld %ld",b[4],b[0]);
    return 0;
}
