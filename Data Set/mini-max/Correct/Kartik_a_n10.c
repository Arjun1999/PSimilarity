#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,count1=0,count2=0;
    long int a[5],l,s,sum1=0,sum2=0;
    for(i=0;i<5;i++)
        scanf("%lu",&a[i]);
    l=a[0];
    s=a[0];
    for(i=0;i<5;i++)
        {
          if(l<=a[i])
              l=a[i];
    }
    for(j=0;j<5;j++)
        {
          if(s>=a[j])
              s=a[j];
    }
    for(i=0;i<5;i++)
        {
          if(l==a[i])
              count1++;
          if(s==a[i])
              count2++;
    }
    for(i=0;i<5;i++)
     {  if(count1==1){
         if(a[i]!=l)
             sum1=sum1+a[i];
     }
      else 
          sum1=(4)*a[0];
      if(count2==1){
      
        if(a[i]!=s)
            sum2=sum2+a[i];}
      else 
          sum2=(4)*a[0];
    }
    printf("%lu %lu",sum1,sum2);
    return 0;
}    
    
    