#include<stdio.h>

int main() {
    int arr[5],small,large,arr_i;
    long long int sum = 0;
    small=arr[0];
    large=arr[0];
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
        if(small>arr[arr_i])
            small=arr[arr_i];
        if(large<arr[arr_i])
            large=arr[arr_i];
        sum=sum+arr[arr_i];
    }
    printf("%ld %ld",sum-large,sum-small);
    return 0;
}