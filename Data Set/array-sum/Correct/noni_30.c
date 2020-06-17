#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000]  ,i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {        scanf("%d",&arr[i]);
        sum+=arr[i];}
    printf("%d",sum);
    return 0;
}
