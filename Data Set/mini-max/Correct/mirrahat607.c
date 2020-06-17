#include<stdio.h>
int main()
{
  int i;
  long long value,arr[5],max,min,sum=0;
      
   for(i=0;i<5;i++)
   {
       scanf("%lld",&arr[i]);

   }
      max=arr[0];
     min=arr[0];
      for(i=0;i<5;i++)
      {     if(max<arr[i])
             max=arr[i];
             if(min>arr[i])
                         min=arr[i];

             sum=sum+arr[i];

      }

        max=sum-max;
        min=sum-min;
        printf("%lld %lld",max,min);


    return 0;


}