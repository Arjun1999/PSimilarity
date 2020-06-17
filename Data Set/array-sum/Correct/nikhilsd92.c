#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int sumofarray(int arr[],int n)
    {
    int sum=0;
    for(int i=0;i<n;i++)
       sum += arr[i];
    return sum;
}
int main() {
    int arr[MAX_SIZE],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",sumofarray(arr,n));
    return 0;
}