#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
int i,n,sum,arr[50];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<n;i++){
    sum=sum+arr[i];
    }

   printf("%d", sum);
    
    return 0;
}
 