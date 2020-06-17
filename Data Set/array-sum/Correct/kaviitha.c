#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],sum=0,n,i=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
    i=0;
    while(i<n)
        {
        sum=sum+a[i];
        i++;
    }
    printf("%d",sum);
    return 0;
}
