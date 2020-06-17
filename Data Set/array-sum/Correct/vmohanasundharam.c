#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n,i;
    long int temp=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        temp=temp+a[i];
    }
    printf("%ld",temp);
    return 0;
}
