#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int sum=0,n,i;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&i);
        sum+=i;
        n--;
    }
    printf("%d",sum);
    return 0;
}
