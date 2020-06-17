#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {int a=0,b=0,c=0,d=0,e=0;
                                         
    for(int i=0;i<arr_size;i++)
    {if(arr[i]=!1)
        a=a+arr[i];
         else if(arr[i]=!2)
            b=b+arr[i];
         else if(arr[i]=!3)
           c=c+arr[i];
         else if(arr[i]=!4)
            d=d+arr[i];
        else if(arr[i]=!5)
            e=e+arr[i];
    }
                                         int y[5]="a,b,c,d,e"
        int m;
    for(m=0;m<arr_size;m++)
    if(y[m]>y[m+1])
        
    
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
