#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int i,j,a[N],b[N]={0};
for(i=1;i<=N;i++)
scanf("%lld ",&a[i]);
for(i=1;i<=N;i++)
{
for(j=1;j<=N;j++)
{
if(i!=j)
b[i]+=a[j];	
}
}
printf("%d %d",b[N],b[1]);
    return 0;
}
