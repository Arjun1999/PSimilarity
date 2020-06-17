#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[1000000];
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
        {
        sum=sum+a[i];
    }
    printf("%lld",sum);
    return 0;
}
