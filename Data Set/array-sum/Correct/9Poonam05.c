#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, i=0;
    int arr[1000]={0};
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
