#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
int n,min=INT_MAX,max=INT_MIN,sum=0,a[n];
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
         scanf("%d",&a[i]);   
    }
    for(int i = 0;i < n;i++){
          sum += a[i];
            if(a[i] < min)
            min = a[i];
    else if(a[i] > max)
           max = a[i];
    }
    
    int M = sum - min;
    int m = sum - max;
    printf("%d %d",M,m);
            
       
}
