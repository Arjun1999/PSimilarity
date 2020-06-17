#include<stdio.h>
#include<math.h>
int main()
{
 unsigned long long int a[5],j,t,i,max=0,min=0;
 
 for(i=0;i<5;i++)
 {
   scanf("%llu",&a[i]);
 }
   for(i=0;i<5;i++)
   {
    for(j=0;j<4-i;j++)
     {
        if(a[j]>a[j+1])
            {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        }
     }
   }
    for(i=0;i<4;i++)
    {
      min=min+a[i];
      
    }
    for(i=4;i>0;i--)
     {
       max=max+a[i];
     }
    printf("%llu %llu",min,max);
     
 }