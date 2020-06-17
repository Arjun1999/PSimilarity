#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    unsigned long long int size,sum = 0,i;
    long long int arr[1005];
    scanf("%llu",&size);
    for(i = 0;i < size;i++)
       {
        scanf("%llu",&arr[i]);
       }
    for(i = 0;i < size;i++)
    {
        sum = sum + arr[i];
    }
    printf("%llu",sum);
     
    return 0;
}
