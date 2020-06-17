#include<stdio.h>
int main()
{
    int a[5],sum1=0,sum2=0,i,temp;
    for(i=0;i<5;i++)
     {
         scanf("%d",&a[i]);
         if(a[i]<a[i+1])
          {
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
          }
     }
     for(i=0;i<4;i++)
      {
          sum1=sum1+a[i];
      }
      for(i=1;i<5;i++)
       {
           sum2=sum2+a[i];
       }
       printf("%d%d",sum1,sum2);
}