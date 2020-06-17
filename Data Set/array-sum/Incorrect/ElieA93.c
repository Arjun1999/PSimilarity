#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int S = 0;
    printf("Enter a number");
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       printf("enter a value"); 
       scanf("%d",&arr[arr_i]);
       S=S+arr[arr_i];
    }
    printf("The sum is: " S);
    return 0;
}
