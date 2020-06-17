#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s,i,arr[100]; 
    scanf("%d",&n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    s=0;
    for(i=0;i<n;i++)
        s=s+arr[i];
    printf("%d",s);
    return 0;
}
