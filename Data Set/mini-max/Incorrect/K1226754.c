#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
     int minsum=INT_MAX,maxsum=INT_MIN,sum=0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
   for(int j=0;j<5;j++){  
       for(int i=0;i<5&&i!=j;i++)
           sum+=arr[i];
       if(sum>maxsum)
           maxsum=sum;
       if(sum<minsum)
           minsum=sum;
           
}
    printf("%d %d",minsum,maxsum);
        
    
    return 0;
}
