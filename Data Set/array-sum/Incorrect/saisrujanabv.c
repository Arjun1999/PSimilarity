#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ 
    int arr[10],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);   
    }
    for(i=0;i<n;i++)
    {
     sum=sum+arr[i];   
    }
    printf("%d",sum);
    return 0; 
}
