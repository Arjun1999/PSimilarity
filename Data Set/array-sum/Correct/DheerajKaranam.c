#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned long long int sum=0,n,i;
    scanf("%llu",&n);
    unsigned long long int a[n];
    for(i=0;i<n;i++){
        scanf("%llu",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%llu",sum);
    return 0;
}
