#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int j,c[5]={0},min=0,max=0,i;
    int *arr = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
        min=min+arr[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
         
            if(j==i)
            {
                continue;
            }
            else
            {
                c[i]=c[i]+arr[j];
        
            }
        }
    }
    for(i=0;i<5;i++)
    {
     if(min>c[i])
        min=c[i];
     if(max<c[i])
         max=c[i];
    }
    printf("%lld %lld",min,max);
    
    return 0;
}
