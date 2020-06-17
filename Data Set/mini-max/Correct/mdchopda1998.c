#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5];
    long int temp;    
    for(int i=0; i<5; i++)
    {
        scanf("%ld ",&arr[i]);
    }
    while(arr[0]>arr[1] || arr[1]>arr[2] || arr[2]>arr[3] || arr[3]>arr[4])
    {
     for(int i=0; i<4; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("%ld %ld",arr[0]+arr[1]+arr[2]+arr[3],arr[4]+arr[1]+arr[2]+arr[3]);
    return 0;
}
