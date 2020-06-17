#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
                
        }
    }
    int min = arr[0]+arr[1]+arr[2]+arr[3];
    int max = arr[4]+arr[1]+arr[2]+arr[3];
    printf("%d  %d",min,max);
    return 0;
}
