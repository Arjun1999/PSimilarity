#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n,a[50],i,sum=0;
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    
        sum=sum+a[i];
    }
    printf("%d",sum);
}
