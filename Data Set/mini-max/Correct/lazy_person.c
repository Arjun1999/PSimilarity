#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
     long int tot=0,min,max,large,small;
    long int *arr = malloc(sizeof(long int) * 5);
    for(int i = 0; i < 5; i++)
    {
       scanf("%li",&arr[i]);
        tot+=arr[i];
    }
    large=arr[0],small=arr[0];
    for(int i = 1; i < 5; i++)
    {
        if(large<=arr[i])
            large=arr[i];
        if(small>=arr[i])
            small=arr[i];
    }
    min=tot-large;
    max=tot-small;
    printf("%li %li",min,max);
    
    return 0;
}
