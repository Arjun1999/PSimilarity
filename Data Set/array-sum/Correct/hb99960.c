#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int length, a, sum=0;
    scanf("%d", &length);
    
    int arr[length];
    for(a=0; a<length; a++){
        scanf("%d", &arr[a]);
    }
    
    for(a=0; a<length; a++){
       sum+=arr[a];
    }
    
    printf("%d", sum);
        
    return 0;
}
