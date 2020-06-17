#include <stdio.h>

int main()
{
  int n=5;
  long input[5],min=1000000000,max=0,sum=0;;
  for(int i=0; i<n; i++)
  {
    scanf("%ld",&input[i]);
    sum+=input[i];
    if(input[i]>max)
      max=input[i];
    if(input[i]<min)
      min=input[i];
  }
  printf("%ld %ld",sum-max,sum-min);
  return 0;
}