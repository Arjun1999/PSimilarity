#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int a[5];
    int t;
    int min=0,max=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int k=0;k<5;k++)
    {    for(int j=k+1;j<5;j++)
        {
            if(a[k]>a[j])
            {
                t=a[k];
                a[k]=a[j];
                a[j]=t;
            }
        }
      }
     for(int z=0;z<4;z++)
     {
         min=min+a[z];
     }
     for(int x=1;x<5;x++)
     {
         max=max+a[x];
     }
    printf("%lld %lld",min,max);

    return 0;
}
