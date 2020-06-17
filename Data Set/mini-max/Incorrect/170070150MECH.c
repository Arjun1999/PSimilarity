#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int birthdayCakeCandles(int n, int ar_size, int* ar) {
    int i,c=0,j=0;
    for(i=0;i<n;i++){
        if(j<ar[i])
    {
        j=ar[i];
    }
    }
    for(i=0;i<n;i++){
        if(j==ar[i])
        {
            c++;
        }}
    return c;
    // Complete this function
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}