#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int sum;
    int *a=malloc(sizeof(int) * 5);
   
    for(int i=0;i<5;i++)
    {
        sum=0;
        for(int j=0;j<5;j++)
        {
            if(j!=i)
            {
                   sum=sum + arr[j];
            }
        }
        a[i]=sum;
    }
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                
            }
        }
    }
    printf("%d %d",a[0],a[4]);
    return 0;
}
