#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[1000],sum=0,s,i;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d ",&a[i]);
        sum=sum+a[i];
    }
    printf("\n%d",sum);
  return 0;
}

