#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
            int a[10],n,i,j,b[10],sum=0,l,s,max,min;
            // read n
         
            for(i=1;i<=5;i++)
            scanf("%d",&a[i]);
            for(i=1;i<=5;i++)
            {
                 //   printf("hii");
                for(j=1;j<=5;j++)
                    {
                    sum=sum+a[j];
                
                    }
                b[i]=sum-a[i];
                sum=0;
               
            }
            s=b[5];
            for(i=1;i<=5;i++)
                {
                    if(s<b[i])
                        {
                        min=s;
                    }
            }
    l=b[1];
    for(i=1;i<=5;i++)
        {
        if(l>b[i])
            {
            max=l;
        }
    }
    printf("%d %d",min,max);
    return 0;
}
