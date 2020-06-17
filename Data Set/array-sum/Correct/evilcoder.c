#include <stdio.h>
long int i,a[1000],sum,n;
int main() {

    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld",sum);
    return 0;
}
