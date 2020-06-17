#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum,i;
    sum=0;
    scanf("%d",&n);
    int arr[20];
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
       
    }
    for(i=0;i<n;i++)
        {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
