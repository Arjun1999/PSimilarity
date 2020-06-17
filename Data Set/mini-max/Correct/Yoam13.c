#include <stdio.h>
int main(void)
{
    long long int i,n,a[5];
    long long int sum[5]={0};
    long long int sum1=0;
    for (i=0;i<5;i++)
        scanf("%lld",&a[i]);
    for (i=0;i<5;i++)
        sum1+=a[i];
    for (i=0;i<5;i++)
         sum[i]=(sum1-a[i]);
    long long int min=sum[0],max=sum[0];
      for (i=0;i<5;i++)
           {
                if (sum[i]<min)
                min=sum[i];
                if (sum[i]>max)
                    max=sum[i];
            }
      printf("%lld %lld",min,max);
      return 0;
}
