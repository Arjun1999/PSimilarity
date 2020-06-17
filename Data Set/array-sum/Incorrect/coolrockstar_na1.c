#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0;
    int a[200];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    return 0;
}
