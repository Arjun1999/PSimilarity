#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
 long float a[10],s[5];
    int i,j,t;
    
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        a[i+5]=a[i];
    }
    
        for(i=0;i<5;i++)
    {
        j=i;
        while(j<j+5)
        {
        s[i]+=a[j];
        j++;
        }    
    }    
    

    printf("%lf %lf",s[0],s[4]);
    return 0;
}
