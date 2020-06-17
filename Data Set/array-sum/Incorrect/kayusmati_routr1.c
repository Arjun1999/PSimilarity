#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
    {
    int i, arr[6], sum, num;  
   
    scanf("%d", &num);
    
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
        
    sum=0;
    for(i=0; i<num; i++)
        sum = sum + arr[i];   
    
    printf("%d", sum);
    
    return(0);  
    
}