#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 1000
int main() {
    int arr[size],n,sum=0,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
