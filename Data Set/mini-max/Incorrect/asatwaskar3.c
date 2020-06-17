#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n=0,a[100],max=0,min=1,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
  /*  for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }*/
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum=sum+a[i];
    }
    printf("%d %d",sum-max,sum-min);
    return 0;
}