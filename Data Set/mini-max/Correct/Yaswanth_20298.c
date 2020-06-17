#include<stdio.h>

int main()
{
   long long int arr[1000];
   int i;

   for(i=0;i<5;i++)
   {
      scanf("%lld ",&arr[i]);
   }
   long long int sum=0;
    for(i=0;i<=4;i++)
        {
        sum=sum+arr[i];
    }
    long long int max=arr[0],min=arr[0];
        for(i=1;i<=4;i++)
        {
            if(arr[i]>max)
                max=arr[i];
            else if(arr[i]<min)
                min=arr[i];
        }
    printf("%lld %lld",sum-max,sum-min);
    return 0;

}
