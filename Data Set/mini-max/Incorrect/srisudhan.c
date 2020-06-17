#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i;
    int *a = malloc(sizeof(int) * 5);
    int sum[5]={'0'};
    for( i = 0; i < 5; i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(i!=j)
                sum[j]=a[j]+sum[j];

        }
    }
    return 0;
}
