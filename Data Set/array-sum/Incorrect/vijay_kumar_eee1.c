#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   int i,n,sum=0;
    scanf("%d",&n);
    printf("%d",n);
    int arr[n];
    scanf("%d",&arr[n]);
    printf("\n");
    for(i=0;i<n;i++)
        {
        printf(" %d ",arr[i]);
        sum=sum+arr[i];
    }
    printf("\n%d",sum);
    return 0;
