#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{    int i,j;
    long int a[1000],t,sum=0,s[1000];
    for(i=0;i<5;i++)
    { scanf("%ld ",&a[i] );
    sum+=a[i];
    }
    
    for(i=0;i<5;i++)
    s[i]=sum-a[i];
    
      for(j=0;j<4;j++)
        for(i=0;i<(4-j);i++)
        if(s[i]>s[i+1])
        {
         t=s[i];
          s[i]=s[i+1];
         s[i+1]=t;
       }
   
          
    printf("%ld %ld",s[0],s[4]);
    
    return 0;
}
