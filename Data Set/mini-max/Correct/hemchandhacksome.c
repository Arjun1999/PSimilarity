#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int a[5]; 
    long int l,s,sum,max,min;
    while(i<5)
    {
    scanf("%ld",&a[i]);
        i++;
    }for(i=0;i<5;i++)
     {
        sum=0;
        for(j=0;j<5;j++)
            {
                if(i==j)
                   {
                    continue;
                    }
            else
                {
                sum=sum+a[j];
                }
        }
        if(i==0)
            {
            max=sum;
            min=sum;
        }
        else
            {
            if(sum>max)
                {
                max=sum;
            }
            if(sum<min)
                {
                min=sum;
            }
            }
      }
    printf("%ld %ld",min,max);
 
    return 0;
}
