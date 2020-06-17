#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],i,j,k=0,l=0,min=0,max=0;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    j=a[0];
    for(i=1;i<5;i++)
        {
        if(a[i]>j)
            {
            j=a[i];
            k=i;
        }
    } 
    j=a[0];
    for(i=1;i<5;i++)
        {
        if(a[i]<j)
            {
            j=a[i];
            l=i;
        }
    }
   for(i=0;i<5;i++)
       {
       if(i!=k)
           min=min+a[i];
       if(i!=l)
           max=max+a[i];
           
   }
    printf("%ld %ld",min,max);
    return 0;
}
