#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    while(n--)
     {
        scanf("%d",&i);
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}