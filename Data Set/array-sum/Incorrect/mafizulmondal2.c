#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
            arr[0]+=arr[i];
    printf("\n %d",arr[0]);
    return 0;
}
