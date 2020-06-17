#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void sort(int a[]){
    int i=0;
    for(i=0;i<5;i++){
        for(int j=i;j<5;j++){
         if(a[i]>a[j]){
             int temp = a[i];
             a[i]=a[j];
             a[j]=temp;
         }   
        }
    }    
}
long int minsum(int a[]){
    long int sum =0;
    for(int i=0;i<4;i++){
        sum = sum +a[i];
    }
    return sum;
}
long int maxsum(int a[]){
    long int sum =0;
    for(int i=1;i<5;i++){
        sum = sum +a[i];
    }
    return sum;
}
int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sort(arr);
    printf("%ld %ld",minsum(arr),maxsum(arr));
    return 0;
}
