#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int arr[5];
void bubblesort(void)
    {long int temp;
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<4;j++)
           { 
            if(arr[j]>arr[j+1])
                {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
           }
    }
}
int main() {
    int i;
    //int *arr = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    long int min=0,max=0;
    bubblesort();
    for(i=0;i<4;i++)
        min+=arr[i];
    for(i=1;i<5;i++)
        max+=arr[i];
    printf("%ld %ld",min,max);
    return 0;
}
