#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum;
    scanf("%d",&n);
    sum=add(n);
    printf("%d",sum);
    return 0;
}
int add(int n)
{
    int num,i,sum=0;
    for(i=1;i<=n;i++)
      {
        scanf("%d",&num);
        sum=sum+num;
      }
    return sum;
}
