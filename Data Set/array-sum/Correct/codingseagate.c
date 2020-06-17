#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size,num;
    long sum;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%ld\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
