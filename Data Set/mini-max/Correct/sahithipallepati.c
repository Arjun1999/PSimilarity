#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long int s[5];
    long int min,max;
    for(int i=0;i<5;i++)
    scanf("%ld",&a[i]);
    for(int i=0;i<5;i++)
    	s[i]=0;
    for(int j=0;j<5;j++)
    {
       switch(j) 
       {
            case 0:
                 for(int i=1;i<5;i++)
                     s[0]+=a[i];
                 break;
           case 1:
                  for(int i=0;i<5;i++)
                  {
                      if(i!=j)
                     s[j]+=a[i];
                  }
                 break;
           case 2:
                  for(int i=0;i<5;i++)
                  {
                      if(i!=j)
                     s[j]+=a[i];
                  }
                 break;
           case 3:
                  for(int i=0;i<5;i++)
                  {
                      if(i!=j)
                     s[j]+=a[i];
                  }
                 break;
           case 4:
                  for(int i=0;i<5;i++)
                  {
                      if(i!=j)
                     s[j]+=a[i];
                  }
                 break;
       }
    }
   min=s[0];max=s[0];
    for(int i=0;i<5;i++)
       {
        if(s[i]>max)
            max=s[i];
        if(s[i]<min)
            min=s[i];
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
