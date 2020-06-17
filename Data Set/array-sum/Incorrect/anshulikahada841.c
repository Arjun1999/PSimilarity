#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,sum;
    scanf("%d\t",&n);
    int a[n];
    for(i=0;i<=n;i++)
     scanf("%d ",&a[i]);
     sum=0;    
    for(i=0;i<=n;i++)
     sum=a[i]+sum;
    printf("%d\t",sum);
}
