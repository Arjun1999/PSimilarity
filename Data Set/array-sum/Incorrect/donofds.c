#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sumarray(int n){
    int i,n,sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i]; }
    printf("the sum is %d",sum);
}
int main(){
    int n,i,sum; 
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n;i++){
       scanf("%d",arr[i]);
    }
    sum=sumarray(n);
    return 0;
}
