#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a[1000],sum = 0,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        {    scanf("%d",&a[i-1]);
                sum  = sum + a[i-1];
        }
    printf("%d",sum);
    return 0;
}
