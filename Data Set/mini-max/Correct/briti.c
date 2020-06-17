#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void minheapify(int profit[],int n,int pos){
    int left = pos*2 + 1;
    int right = pos*2 + 2;
    int i = pos;
    int max = profit[pos];
    if(left<n && profit[left]<max){
        max = profit[left];
        i = left;
    }
    if(right<n && profit[right]<max){
        max = profit[right];
        i = right;
    }
    if(i!=pos){
        int temp = profit[pos];
        profit[pos] = profit[i];
        profit[i] = temp;
        minheapify(profit,n,i);
    }
}

void heapSort(int profit[],int n){
    for(int i=n/2-1;i>=0;i--){
        minheapify(profit,n,i);
    }
    for(int i=n-1;i>=0;i--){
        int temp = profit[i];
        profit[i] = profit[0];
        profit[0] = temp;
        minheapify(profit,i,0);
    }
}
int main() {
    int *arr = malloc(sizeof(int) * 5);
    long max = 0;
    long min = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    heapSort(arr,5);
    int i = 0;
    while(i<4){
        max = max + arr[i];
        min = min + arr[5-1-i];
        i++;
    }
    printf("%ld %ld",min,max);
    return 0;
}
