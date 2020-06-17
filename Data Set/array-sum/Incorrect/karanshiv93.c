#include <math.h>
#include <stdio.h>
#include <string.h>int sum
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a[100],n,i,sum=0;
    printf("\nenter no of elements");
    scanf("%d",&n);
    printf("\nenter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
        sum+=a[i];
    }
    printf("%d\nsum",sum);
}
