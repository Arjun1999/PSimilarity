#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,a[1000];
    long sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
       printf("%li",sum);
    return 0;
}
