#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned int sum=0,arr[5];
    int i;
    
    for(i=0;i<5;i++)
    {
    scanf("%u",&arr[i]);
    sum+=arr[i];
    }
    
        unsigned int min=arr[0],max=arr[0];
    
        for(i=0;i<5;i++)
        {
            if(max<arr[i])
            max=arr[i];
        }
    
            for(i=0;i<5;i++)
            {
                if(min>arr[i])
                min=arr[i];
            }
        printf("%u %u",sum-max,sum-min);
return 0;
}
