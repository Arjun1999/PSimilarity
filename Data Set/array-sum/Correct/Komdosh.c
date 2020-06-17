#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count;
    scanf("%d", &count);
    int sum=0, t;
    for(int i=0; i<count; i++)
        {
        scanf("%d", &t);
        sum+=t;
    }
    printf("%d", sum); 
    return 0;
}
