#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a,sum=0;
    scanf("%d",&n);
    while(n-->0){
        scanf("%d",&a);
        sum += a;
    }
    printf("%d",sum);
    return 0;
}
