#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sum(arr, n)
{
    int summ=0;
    
    for (pointer i=0; i!=n; i++)
        {
       sum=sum+arr[i];
        }
}  
    

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sum(arr, n)
    return 0;
}
