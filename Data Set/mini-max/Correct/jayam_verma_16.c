#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int i,j,c=0,s=0,s1=0,s2=0;
    long int a[5];
    for(i=0;i<=4;i++)
        {
       scanf("%lu",&a[i]);
    }
   
    s1=s2=a[0]+a[1]+a[2]+a[3];
   for(j=1;j<=4;j++)
       {
       for(i=0;i<=4;i++){
           if(c!=i)
           {
           s=s+a[i];
       }
       }
       if(s<s1)
           s1=s;
       if(s>s2)
           s2=s;
         c++;  
       s=0;
   }
printf("%lu\t",s1);
    printf("%lu",s2);
    return 0;
}
