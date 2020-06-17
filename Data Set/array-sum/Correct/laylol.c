#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size, sum=0, num;
    scanf("%d",&size);
    for(; size>0; size--){
        scanf("%d",&num);
        sum = sum+num;
    }
    printf("%d",sum);
    
    return 0;
}
