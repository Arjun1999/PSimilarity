#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[1001],sum=0,t,i;
    scanf("%d",&t);
    for (i=0;i<t;i++)
        scanf("%d",&arr[i]);
    i=0;
    for (;i<t;i++)
        sum+=arr[i];
    printf("%d",sum);  
    return 0;
}
