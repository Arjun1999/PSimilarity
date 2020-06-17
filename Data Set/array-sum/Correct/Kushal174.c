#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    unsigned int sum=0;
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%u",sum);
    return 0;
}
