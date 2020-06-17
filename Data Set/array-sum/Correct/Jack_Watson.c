#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    scanf("%d",&n);
    long long int a,sum=0;
    for(i=0;i<n;i++){
        scanf("%lld",&a);
        sum = sum + a;
    }
    printf("%lld",sum);
    return 0;
}
