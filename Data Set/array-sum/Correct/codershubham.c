#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i;
    scanf("%d",&n);
   int arr[n],sum=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0;
    for(i=0;i<n;i++)
   sum+=arr[i];
    printf("%d",sum);
        return 0;
}
