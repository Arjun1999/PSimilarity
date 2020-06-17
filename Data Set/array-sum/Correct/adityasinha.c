#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a[1000],n,i,total;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    total=0;
    for(i=0;i<n;i++)
        {
            total=total+a[i];
        }
    printf("%d",total);
    return 0;
}
