#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<stdio.h>

int main()
{
  long  int i,j,a[10],temp,n=5;
 long  int s=0,k=0;
 // printf("enter the size");
   // scanf("%ld",&n);
    //printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
for(j=0;j<n-1;j++)
    {

    {if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            }

    } }
   
    
    for(i=0;i<n-1;i++)
   {
       s=s+a[i];
   }


    for(i=1;i<n;i++)
    {
        k=k+a[i];
    }
        printf("%ld %ld",s,k);


}

