#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long *arr = malloc(sizeof(long) * 5);
    int arr_i;
    for( arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    int f;
    while (1)
    {
        f=0;
        for(arr_i=0;arr_i<4;arr_i++)
        {
            if(*(arr+arr_i)>*(arr+arr_i+1))
            {
                *(arr+arr_i)=*(arr+arr_i+1)+*(arr+arr_i);
                *(arr+arr_i+1)=*(arr+arr_i)-*(arr+arr_i+1);
                *(arr+arr_i)=*(arr+arr_i)-*(arr+arr_i+1);
                f++;
            }
        }
            if(f==0)
                break;
    }
    printf("%ld %ld",(*(arr))+(*(arr+1))+*(arr+2)+*(arr+3),*(arr+1)+*(arr+2)+*(arr+3)+*(arr+4));
        
    return 0;
}
