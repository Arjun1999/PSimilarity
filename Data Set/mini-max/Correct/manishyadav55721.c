#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int arr[5],s1,s2;
     int x,temp,i,j,k;
    for ( i = 0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
        
    }
    for ( j = 0;j<4;j++)
    {
        for(k=0;k<4-j;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    
    s1=arr[0]+arr[1]+arr[2]+arr[3];
    s2 = arr[4]+arr[1]+arr[2]+arr[3];
    printf("%lld %lld",s1,s2);
    return 0;
}
