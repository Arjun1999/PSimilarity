#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 1001

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,a[size],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
      printf("%d",sum);
    return 0;
}
