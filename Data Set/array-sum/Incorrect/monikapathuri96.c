#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int sum=0;
    int i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+arr[i];
    }
    printf("sum of all elements of array=%d",sum);
    return 0;
}
