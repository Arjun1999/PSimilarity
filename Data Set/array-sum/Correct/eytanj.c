#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfArray(int arr[],int n) {
    int i,sum = 0;
    for(i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
int main() {
    
    int n, i, sum = 0;
    int *arr;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int)*n);
    if(arr == NULL) {
        printf("Error with malloc!");
        exit(1);
    }
    for(i = 0; i < n; i++)
        scanf("%d", &(arr[i]));
    printf("%d" ,sumOfArray(arr,n));
    return 0;
}

