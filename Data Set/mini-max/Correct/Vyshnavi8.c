#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int *a = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5;i++){
       scanf("%d",&a[i]);
    }
    
    long long int b[100];
    long long  int i,sum=0,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
            sum+=a[j];
        }
        b[i]=sum;
        sum=0;
        
        
    }
    long long  int min=b[0],max=b[0];
    for(i=0;i<5;i++)
    {
    if(b[i]>max)
        {
        max=b[i];
        }
        if(b[i]<min)
        {
            min=b[i];
        }
    }
        
        printf("%Ld %Ld ",min,max);
       
    return 0;
}
