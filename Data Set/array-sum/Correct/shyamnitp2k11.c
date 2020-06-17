#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j;
    int sum=0;
    int arr[1000]; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
        {
        sum=sum+arr[j];
    }
   printf("%d",sum); 
    return 0;
}
