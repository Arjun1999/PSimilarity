#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a[1000],n,i,sum;
    a[0]=0;
    scanf("%d \n",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
        {
        sum=a[i]+sum;
         
        }
    printf("%d",sum);
    return 0;
}
