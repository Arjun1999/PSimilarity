#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[1000],i,n,sum=0;
    scanf("%d",&n);
    if(1<=n<=1000)
        {
        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }printf("%d",sum);
    }
    return 0;
}
