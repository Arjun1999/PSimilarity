#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int length,i=0,sum=0;
    
    scanf("%d",&length);
    int buffer[length];
    for(i=0;i<length;i++){
        scanf("%d",&buffer[i]);
        sum=sum+buffer[i];
    }
    printf("%d",sum);
    return 0;
}
