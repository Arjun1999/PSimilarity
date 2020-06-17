#include <stdio.h>
int main() {

    long int n,a[1000],i,s=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        s=s+a[i];
    }
    printf("%ld",s);
    return 0;
}
