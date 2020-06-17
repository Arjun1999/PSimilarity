#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    const int N = 100;
    int a[N];
    int len;
    int i = 0;
    int sum = 0;
    scanf("%d", &len);
    
    if (len == 0){
        printf("Array length can't be 0");
        return 1;
    }
    
    else if(len < N && len > 0){
        
        for(i = 0; i < len; i++){
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }
        
    }
    
    else if(len > N){
        
        printf("Array Index Out of Bounds");
        return 1;
        
    }
    
    printf("%d", sum);
    
    return 0;
}
