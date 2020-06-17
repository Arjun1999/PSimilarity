#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    long int a[5],s[5],i,j;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
        { s[i]=0;
        for(j=0;j<5;j++)
            {
            if(i!=j)
                {
                  s[i]=s[i]+a[j];
            }}
    //printf("%ld ",s[i]);
        }
   long int min=s[0];
   long int max=s[0];
    for(i=0;i<5;i++)
        {
        if(s[i]<min)
            min=s[i];
        if(s[i]>max)
            max=s[i];
    }
    printf("%ld %ld",min,max);
    
     return 0;
}
