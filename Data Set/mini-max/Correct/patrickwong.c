#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    int n = 5;
    long long arr[n];
    arr[0] = a; arr[1] = b; arr[2] =  c; arr[3] = d; arr[4] = e;
    int max_index = 0, k = n, temp = 0;
    //sort the array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            if(arr[j] > arr[max_index]) {
                //do something
                max_index = j;
            }
        }
        temp = arr[k-1];
        arr[k-1] = arr[max_index];
        arr[max_index] = temp;
        max_index = 0;
        k--;
    }
    //minimum output
    long long min_num = 0, max_num;
    for(int i = 0; i < n-1; i++) {
        min_num = min_num + arr[i];
    }
    //maximum output
    for(int i = 1; i < n; i++) {
        max_num = max_num + arr[i];
    }
    printf("%lld %lld", min_num, max_num);
    return 0;
}
