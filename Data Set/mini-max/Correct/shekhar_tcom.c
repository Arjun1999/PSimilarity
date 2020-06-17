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
    int temp;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
        {
            if(*(arr+i)<*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i) =*(arr+j);
                *(arr+j)=temp;
            }   
        }
    long int min_sum=0,max_sum=0;
    for(int i=0;i<4;i++)
        max_sum+=*(arr+i);
    for(int j=4;j>0;j--)
        min_sum+=*(arr+j);
    printf("%ld %ld",min_sum,max_sum);
    return 0;
}
