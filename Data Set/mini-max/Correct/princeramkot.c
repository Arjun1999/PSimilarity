#include <stdio.h>
#include <stdlib.h>

int main()
{
 long int a[5],i,j,temp=0,min=0,max=0;

    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<4;i++)
    {
      for(j=0;j<4-i;j++)
      {
        if(a[j]>a[j+1])
        {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }


      }
    }
    for(i=1;i<5;i++)
    {
       max=max+a[i];
    }
    for(i=0;i<4;i++)
    {
       min=min+a[i];
    }
    printf("%ld ",min);
    printf("%ld",max);


    }
