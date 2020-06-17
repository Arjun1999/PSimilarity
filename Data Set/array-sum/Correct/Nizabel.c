#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count, sum, num;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&count);
    sum=0;
    for(;count>0;--count) {
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}
