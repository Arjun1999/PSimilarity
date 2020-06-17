#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int arraysum(int a[], int n)
    {
    int sum=0,i;
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
    return sum;
}
int main() {

    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    int sum;
    sum=arraysum(a,n);
    printf("%d\n",sum);
    return 0;
}
