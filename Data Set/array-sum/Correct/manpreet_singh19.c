#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int sum=0,a[1000000],i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("%d",sum);  
    return 0;
}
