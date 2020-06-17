#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int sum,temp,n,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%lld",&n);
    for(i=0;i<n;++i){
        scanf("%lld",&temp);
        sum+=temp;
    }
    printf("%lld",sum);    
    return 0;
}
