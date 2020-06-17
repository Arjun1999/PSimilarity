#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i,j,temp=0;
    long res1=0,res2=0;
    int ar[10],br[10];
    for(i=0;i<5;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
        if(ar[i]>ar[j])
        {
            temp=ar[j];
            ar[j]=ar[i];
            ar[i]=temp;
        }
        }
    }
    for(i=0,j=4;i<5,j>=0;i++,j--)
    {
        br[j]=ar[i];
    }
    for(i=0;i<4;i++)
    {
        res1=res1+ar[i];
    res2=res2+br[i];
    }
    
    printf("%ld  %ld",res1,res2);
    return 0;
}
