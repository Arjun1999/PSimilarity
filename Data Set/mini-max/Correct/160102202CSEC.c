#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
     long int a[5],i,min,max,s=0;
    
    for(i=0;i<5;i++)
      {
        scanf("%ld",&a[i]);
       s+=a[i];       
    }
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++)
        {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("%ld %ld",s-max,s-min);
    return 0;
}
