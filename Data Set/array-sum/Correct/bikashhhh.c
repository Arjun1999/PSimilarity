#include <stdio.h>
int main() {
int a[1000],n,i,s;
    scanf("%d",&n);
    for(s=0,i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}
