#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int i=0,j;
    long int sum=0;
    long int max=0;
    long int min=9999999999;
    for(i=0; i<5; i++)
        scanf("%ld",&a[i]);
    
    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
            {
            if(i!=j)
                {
                sum+=a[j];
            }
        }    
        if(sum>max)
                max=sum;
        if(sum<min)
                min=sum;
                
            sum=0;
    }
    printf("%ld %ld",min,max);
    return 0;
}
