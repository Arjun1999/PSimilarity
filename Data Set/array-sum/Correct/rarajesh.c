#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
        arr[0]+=arr[i];
    printf("%d",arr[0]);
    return 0;
}
