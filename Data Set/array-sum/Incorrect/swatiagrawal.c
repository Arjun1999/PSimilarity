#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,sum=0; 
    int arr[10];
    scanf("%d", &n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
