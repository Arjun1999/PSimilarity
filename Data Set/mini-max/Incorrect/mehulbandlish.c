#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long int arr[5],max,min,sum=0;
    int i;
    scanf("%11d",&arr[0]);
    max=arr[0];min=arr[0];sum=arr[0]+sum;
    for(i=1;i<=5;i++){
      scanf("%11d",&arr[i]);
       if(max<arr[i])
           max=arr[i];
       if(min>arr[i])
           min=arr[i];
        sum=sum+a[i];
    }  
    printf("%11d %11d",sum-max,sum-min);
    return 0;
}
