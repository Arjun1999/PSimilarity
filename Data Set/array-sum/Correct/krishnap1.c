#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a[1000],sum=0;
   // printf("\n enter size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
for(int j=0;j<n;j++)
    sum=sum+a[j];
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
