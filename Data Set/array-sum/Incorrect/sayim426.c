#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int simpleArraySum(int n,int ar[]) {
    int i;
    int sum_of_array = 0;
    
    for(i = 0; i < n; i++){
       scanf("%d", &ar[i]);
       sum_of_array += ar[i];
    }
    
 
        
        return sum_of_array;
    }
    
    // Complete this function
    


int main() {
    int n; 
    scanf("%d", &n);
    int ar[10];
    for(int i = 0; i < n; i++){
       scanf("%d",&ar[i]);
    }
    int result = simpleArraySum(n,ar);
    printf("%d\n", result);
    return 0;
}
