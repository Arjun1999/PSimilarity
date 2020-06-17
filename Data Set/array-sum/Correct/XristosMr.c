#include <stdio.h>

int main() {
    
    int size, i, temp, sum = 0;
    scanf("%d",&size);
    for(i=0; i<size; i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    
    return 0;
}
