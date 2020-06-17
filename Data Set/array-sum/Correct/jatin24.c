#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int a[1000],i,s=0,n;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
        {
        scanf("%llu",&a[i]);
        s=s+a[i];
    }
    printf("%llu",s);
    return 0;
}
