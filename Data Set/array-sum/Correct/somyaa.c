#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int n,a[1000000],sum,i;
int main() {
    sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    printf("%lld",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
