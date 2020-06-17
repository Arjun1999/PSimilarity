#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int count,i,sum,num;
    sum=0;
    scanf("%d",&count);
    for(i=0;i<count;i++) {
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("%d",sum);
    return 0;
}
