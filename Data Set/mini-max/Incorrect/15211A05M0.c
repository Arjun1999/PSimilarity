#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define max 100
int main()
{
    int a[5],n,b[max],sum=0,m=1,temp,temp1;
    scanf("%d",&n);
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=5;i++)
    {
        sum=0;
        for(int j=1;j<=5;j++)
        {
           if(i==j)
               continue;
            else
                sum=sum+j;
        }  
        b[m]=sum;
        m++;
    }
    /*for(int i=1;i<m;i++){
        for(int j=1;j<m-i-1;j++){
            if(b[j]>b[j+1])
        {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=b[j];
            }
        }
    }*/
    temp=b[1];
        temp1=b[1];
    for(int i=1;i<m;i++)
    {        if(b[i]<temp)
           temp=b[i];
    }
    for(int i=1;i<m;i++)
    {
        if(b[i]>temp1)
           b[i]=temp1;
    }
   // printf("%d\n",m);
      printf("%d ",temp);
    printf("%d",temp1);
    return 0;
}

