#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long  int a[100],big,small,b[100],sum; 
    //long int b; 
    //long int c; 
    //long int d;
    //long int e;
   int i,j;
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
    int count=0;
    for(j=0;j<5;j++)
    {
        sum=0;
        for(i=0;i<5;i++)
            {
              if(i==count)
                  {
                    continue;  
                  }
                else
                    {
                        sum=sum+a[i];
                    }
            }
        b[j]=sum;
        count++;
    }
   // printf("elements are:");
    //for(i=0;i<5;i++)
      //  printf("%lld\t",b[i]);
    big=b[0];
    for(i=0;i<5;i++)
    {
        if(big<b[i])
        {
            big=b[i];
        }
    }
    small=b[0];
    for(i=0;i<5;i++)
    {
        if(small>b[i])
        {
            small=b[i];
        }
    }
    printf("%lld %lld",small,big);
    return 0;
}
