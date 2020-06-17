#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define MAX_SIZE 1000
int sum(int arr[],int n)
    {
    
int sum=0;
int i;
for(i=0;i<n;i++)
    sum += arr[i];
return sum;
}

int main(){
    int arr[MAX_SIZE];
    int n,i; 
    printf("enter th number of elements in arry \n");
    scanf("%d",&n);
    printf("enter elements \n");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("sum of ele is %d",sum(arr,n));
    return 0;
}
