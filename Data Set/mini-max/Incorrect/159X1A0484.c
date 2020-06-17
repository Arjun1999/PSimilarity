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
    int n,i,j,x,y,temp;
    scanf("%d",&n);
    int *a=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
               {
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
               }
        }
    }
    for(i=0;i<n-1;i++)
    {
        x=0;
        x+=a[i];
    }
    for(i=1;i<n;i++)
    {
        y=0;
        y+=a[i];
    }
    printf("%d %d",x,y);
    return 0;
}
