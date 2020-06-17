#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    int n,add=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++)
        {
        add+=arr[i];
        }
    printf("%d",add);
    return 0;
    }
