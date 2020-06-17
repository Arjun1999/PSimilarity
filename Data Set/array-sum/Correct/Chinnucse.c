#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int len,sum=0,i;
    scanf("%d",&len);
    int arr[len];
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
