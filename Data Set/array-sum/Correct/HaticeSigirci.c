#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int num;
    int temp;
    int i;
    int sum = 0;
    scanf("%d", &num);
    
    for(i=0; i<num; ++i) {
        
        scanf("%d", &temp);
        sum = sum + temp;
        
    }
    
    printf("%d",sum);
    
    return 0;
}
