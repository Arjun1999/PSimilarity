#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {int i,j,t,count=0,p[30]for(i=0;i<arr_size;i++){
    count=count+arr[i];
}for(i=0;i<arr_size){
    p[i]=count-arr[i];
}
         for(i=0;i<arr_size;i++){
             for(j=i;j<n-array_saze-1;j++){
                 if(p[j]>p[j+1]){t=p[j];
                                 p[j]=p[j+1];
                                 p[j+1]=p[j];
                     
                 }
             }
         }          printf("%d %d",p[0],p[arr_size]);                      
    // Complete this function
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
