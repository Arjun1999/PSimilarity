/*#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int a[5],i,min,max;
    int sum=0;
    min=a[0];
    max=a[0];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
           min=a[i];
        if(max<a[i])
           max=a[i];
        sum=sum+a[i];
    }
        printf("%d %d",sum-max,sum-min);
    
    return 0;
}