#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_array_sum(int arr[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += arr[i];
    
    printf("%d", sum);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, i;
    scanf("%d", &n);
    int arr[1000];
    
    for(i = 0; i < 1000; i++){
        scanf("%d", &arr[i]);
    }
    
    print_array_sum(arr, n);
    return 0;
}
