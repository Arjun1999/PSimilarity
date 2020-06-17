#include<stdio.h>
int main()
{
    long long int arr[5],B[5],small,large,sum=0;
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        printf("hi hello");
        scanf("%lld",&arr[i]);
        printf("hi hello sfter entry");
    }
    for(i=0;i<5;i++)
    {   sum=0;
        for(j=0;j<5;j++)
        {
          printf("hi hello in if 1");
          if (j == i)
            continue;
          else {
             sum=sum+arr[j];
             B[k++]=sum;
            }
            }
        }
        small=large=B[0];
        for (i = 0; i < 5; i++)
  {
    if (B[i] < small)
    {
       small  = B[i];
    }
  }
  for (i = 0; i < 5; i++) {
    if (B[i] > large) {
      large = B[i];
    }
  }
  printf("%lld %lld",small,large);
  return 0;
    }
