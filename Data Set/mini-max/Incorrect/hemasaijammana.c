#include<stdio.h>
int main()
{
    int a[5],i,min,max,min1,max1,n,sum=0,t;
        for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
    min=a[0];
    max=a[0];
    //printf("%d \n",min);
    //printf("%d \n",max);
    /*for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            t=0;
      t=a[i];
            max=t;
        }
        if(a[i]<min)
        {
            t=0;
       t=a[i]; 
            min=t;
        }
         }*/
    printf("%d,%d",min ,max);
    max1=sum-min;
    min1=sum-max;
    printf("\n %d,%d",min1,max1);
    return 0;
}
