#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[max],n,i,sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%d",sum);
    return 0;
}
