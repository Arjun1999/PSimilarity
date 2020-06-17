#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[110],i,j,sum,tots[10],min,max;
    for(i = 0;i < 5; i++)
       scanf("%d",&arr[i]);
    for(i=1;i<=5;i++)
    {
        sum=0;
        for(j=5;j>0;j++)
        {
            if(j==i)
                continue;
            else
                sum=sum+arr[j];
        }
        tots[i-1]=sum;
    }
    for(i=0;i<5;i++)
    {
        min=0;
        max=0;
        if(tots[i]<min)
            min=tots[i];
        else if(tots[i]>max)
            max=tots[i];
    }
    printf("%d %d",min,max);
    
    return 0;
}
