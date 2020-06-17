#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long int min = 0;
    long int max= 0;
    long int total = 0;
    int i = 0;
    
    for(i = 0; i < 5; i++)
    {
        scanf("%ld",&a[i]);
    }
    
    min = a[0];
    max = a[0];
    
    for(i = 0; i < 5; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
        total += a[i];
    }    
    
    printf("%ld ", (total - max));
    printf("%ld", (total - min));    
    return 0;
}
