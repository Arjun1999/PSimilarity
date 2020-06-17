#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long int a[10],n=5,max=1,x=0,i;
    
    for(i=0;i<n;i++){
       scanf("%lu",&a[i]);
    }
   unsigned long int min=a[0];
    for(i=0;i<n;i++)
        {
        if (a[i]<min||min==a[i])
            min=a[i];
    }
    for(i=0;i<n;i++){
        
        if(a[i]>max)
            max=a[i];
    }
 for(i=0;i<n;i++)
     {
     x=x+a[i];
     
 }
    printf("%lu ",x-max);
     printf("%lu ",x-min);
    //printf("%lu ",x);
    //printf("%lu",min);

        return 0;
}