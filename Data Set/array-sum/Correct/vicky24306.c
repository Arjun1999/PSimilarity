#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,a[1000],sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a[t]);
        sum+=a[t];
    }
    printf("%d",sum);
    return 0;
}
