#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int arr[10],n=5;
       int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i==4||i==0)
        {
        for(int j=n-1;j>=0;j--)
        {
         
            if(arr[i]==arr[j])
            {
                continue;
            }
            sum=sum+arr[j];
           
        }
         printf("%d\t",sum);
            sum=0;
        }
    }
    return 0;
}
