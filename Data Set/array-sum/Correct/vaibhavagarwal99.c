#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arraysum(int* a,int b)
    {
    int sum=0;
    for(int i=0;i<b;i++)
        {
        sum+=a[i];
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d ",&a[i]);
    }
    printf("%d",arraysum(a,n));
    return 0;
}
