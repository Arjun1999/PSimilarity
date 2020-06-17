#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    long int n,num,sum;
    scanf("%ld",&n);
    sum=0;
    while(n--)
        {
        scanf("%ld",&num);
        sum+=num;
    }
    printf("%ld",sum);
}
