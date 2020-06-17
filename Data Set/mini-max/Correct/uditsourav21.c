#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long int a[5];
    unsigned int i;
    unsigned long int max,min;
   unsigned long int sum=0,s[5];
    for(i=0;i<5;i++)
    {
     scanf("%ld",&a[i]);
     sum+=a[i];
    }
    for(i=0;i<5;i++)
    { s[i]=sum-a[i];
    }
    max=s[0];
    min=s[0];
    for(i=0;i<5;i++)
    { 
      if(max<s[i])
          max=s[i];
     else if(min>s[i])
         min=s[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
