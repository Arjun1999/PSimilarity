#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i=0,n,a[1000],sum=0;
    scanf("%d",&n);
    while(i<n)
        {
        scanf("%d",&a[i++]);
        sum+=a[i-1];
        }
    printf("%d",sum);
    return 0;
}
